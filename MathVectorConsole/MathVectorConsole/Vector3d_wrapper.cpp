#include "Vector3d.h"

#define BOOST_PYTHON_STATIC_LIB
#include <boost/python.hpp>

using namespace boost::python;

BOOST_PYTHON_MODULE(vector3d)
{
    class_<MathVector::Vector3d>("Vector3D", init<float, float, float>())
        .def(init<MathVector::Vector3d>())
        .add_property("x", &MathVector::Vector3d::getX, &MathVector::Vector3d::setX)
        .add_property("y", &MathVector::Vector3d::getY, &MathVector::Vector3d::setY)
        .add_property("z", &MathVector::Vector3d::getZ, &MathVector::Vector3d::setZ)
        .def(self += self)
        .def(self + self)
        .def(self -= self)
        .def(self - self)
        .def(self *= self)
        .def(self *= float())
        .def(self * self)
        .def(self * float())
        .def(self /= self)
        .def(self /= float())
        .def(self / self)
        .def(self / float())
        .def("length", &MathVector::Vector3d::length)
        .def("sqr_length", &MathVector::Vector3d::sqrLength)
        .def("normalize", &MathVector::Vector3d::normalize)
        .def("dot_product", &MathVector::Vector3d::dotProduct)
        .def("cross_product", &MathVector::Vector3d::crossProduct)
        ;
}