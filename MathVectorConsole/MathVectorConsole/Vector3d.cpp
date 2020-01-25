//#include "pch.h"
#include "Vector3d.h"

namespace MathVector
{
    Vector3d::Vector3d(const float _x, const float _y, const float _z)
        :m_x(_x), m_y(_y), m_z(_z)
    {
    }

    Vector3d::Vector3d(const Vector3d& _vector)
    {
        m_x = _vector.m_x;
        m_y = _vector.m_y;
        m_z = _vector.m_z;
    }


    Vector3d::~Vector3d()
    {
    }

    float Vector3d::getX() const
    {
        return m_x;
    }

    float Vector3d::getY() const
    {
        return m_y;
    }

    float Vector3d::getZ() const
    {
        return m_z;
    }

    void Vector3d::setX(float _x)
    {
        m_x = _x;
    }

    void Vector3d::setY(float _y)
    {
        m_y = _y;
    }

    void Vector3d::setZ(float _z)
    {
        m_z = _z;
    }

    Vector3d& Vector3d::operator=(const Vector3d& _rhs)
    {
        if (this != &_rhs)
        {
            m_x = _rhs.m_x;
            m_y = _rhs.m_y;
            m_z = _rhs.m_z;
        }
        return *this;
    }

    Vector3d& Vector3d::operator+=(const Vector3d& _rhs)
    {
        m_x += _rhs.m_x;
        m_y += _rhs.m_y;
        m_z += _rhs.m_z;
        return *this;
    }

    Vector3d& Vector3d::operator-=(const Vector3d& _rhs)
    {
        m_x -= _rhs.m_x;
        m_y -= _rhs.m_y;
        m_z -= _rhs.m_z;
        return *this;
    }

    Vector3d& Vector3d::operator*=(const Vector3d& _rhs)
    {
        m_x *= _rhs.m_x;
        m_y *= _rhs.m_y;
        m_z *= _rhs.m_z;
        return *this;
    }

    Vector3d& Vector3d::operator*=(const float _rhs)
    {
        m_x *= _rhs;
        m_y *= _rhs;
        m_z *= _rhs;
        return *this;
    }

    Vector3d& Vector3d::operator/=(const Vector3d& _rhs)
    {
        m_x /= _rhs.m_x;
        m_y /= _rhs.m_y;
        m_z /= _rhs.m_z;
        return *this;
    }

    Vector3d& Vector3d::operator/=(const float _rhs)
    {
        m_x /= _rhs;
        m_y /= _rhs;
        m_z /= _rhs;
        return *this;
    }

    Vector3d Vector3d::operator-()
    {
        return Vector3d(-m_x, -m_y, -m_z);
    }

    float Vector3d::length() const
    {
        return (float)sqrt(sqrLength());
    }

    float Vector3d::sqrLength() const
    {
        return m_x * m_x + m_y * m_y + m_z + m_z;
    }

    void Vector3d::normalize()
    {
        float scale = 1.0f / length();
        m_x *= scale;
        m_y *= scale;
        m_z *= scale;
    }

    float Vector3d::dotProduct(const Vector3d & _vector)
    {
        return m_x * _vector.m_x + m_y * _vector.m_y + m_z * _vector.m_z;
    }

    Vector3d Vector3d::crossProduct(const Vector3d & _vector)
    {
        return Vector3d(
            m_y*_vector.m_z - m_z * _vector.m_y,
            m_z*_vector.m_x - m_x * _vector.m_z,
            m_x*_vector.m_y - m_y * _vector.m_x);
    }

    Vector3d operator+(const Vector3d & lhs, const Vector3d & rhs)
    {
        return Vector3d(lhs) += rhs;
    }

    Vector3d operator-(const Vector3d & lhs, const Vector3d & rhs)
    {
        return Vector3d(lhs) -= rhs;
    }

    Vector3d operator*(const Vector3d & lhs, const Vector3d & rhs)
    {
        return Vector3d(lhs) *= rhs;
    }

    Vector3d operator*(const Vector3d & lhs, const float rhs)
    {
        return Vector3d(lhs) *= rhs;
    }

    Vector3d operator/(const Vector3d & lhs, const Vector3d & rhs)
    {
        return Vector3d(lhs) /= rhs;
    }

    Vector3d operator/(const Vector3d & lhs, const float rhs)
    {
        return Vector3d(lhs) /= rhs;
    }
}