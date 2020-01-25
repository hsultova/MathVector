#pragma once

#include <math.h>

namespace MathVector
{
    /// <summary>
    /// A class to hold 3D vector using three floating point numbers
    /// </summary>
    class Vector3d
    {
    public:
        Vector3d(const float _x, const float _y, const float _z);
        Vector3d(const Vector3d& _vector);
        ~Vector3d();

        float getX() const;
        float getY() const;
        float getZ() const;

        void setX(float _x);
        void setY(float _y);
        void setZ(float _z);

        Vector3d& operator=(const Vector3d& _rhs);

        //Add a vector to the current vector
        Vector3d& operator+=(const Vector3d& _rhs);

        //Subtract a vector from the current vector
        Vector3d& operator-=(const Vector3d& _rhs);

        //Multiply the current vector by another vector
        Vector3d& operator*=(const Vector3d& _rhs);

        //Multiply the current vector by a scalar
        Vector3d& operator*=(const float _rhs);

        //Divide a vector from the current vector
        Vector3d& operator/=(const Vector3d& _rhs);

        //Divide a scalar from the current vector
        Vector3d& operator/=(const float _rhs);

        //Returns a vector with opposite direction of the current one
        //Ex: V1(x, y, z) -> V2(-x, -y, -z)
        Vector3d operator -();

        //Returns a length/magnitude of the current vector
        float length() const;

        //Returns square of the length/magnitude. Use if it's not needed squared length
        float sqrLength() const;

        /// <summary>
        /// Scales the Vector3d to unit length
        /// </summary>
        void normalize();

        /// <summary>
        /// Calculate the dot/scalar/inner product
        /// </summary>
        /// <param name="_vector">Vector3d used for dot product calculations</param>
        /// <returns>The result scalar as float</returns>
        float dotProduct(const Vector3d& _vector);

        /// <summary>
        /// Calculate the cross/outer product 
        /// </summary>
        /// <param name="_vector">Vector3d used for dot product calculations</param>
        /// <returns>The result as Vector3d</returns>
        Vector3d crossProduct(const Vector3d& _vector);

    private:
        float m_x;
        float m_y;
        float m_z;
    };

    /// Add two vectors
    Vector3d operator +(const Vector3d& lhs, const Vector3d& rhs);

    //Subtract two vectors
    Vector3d operator -(const Vector3d& lhs, const Vector3d& rhs);

    //Multiply two vectors
    Vector3d operator *(const Vector3d& lhs, const Vector3d& rhs);

    //Multiply a vector by a scalar
    Vector3d operator *(const Vector3d& lhs, const float rhs);

    //Divide two vectors
    Vector3d operator /(const Vector3d& lhs, const Vector3d& rhs);

    //Divide a vector from a scalar
    Vector3d operator /(const Vector3d& lhs, const float rhs);
}
