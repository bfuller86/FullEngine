// FullEngine. Brian Fuller. August 2013.
//
// Vector.cpp
// Implementation of the Vector classes

#include "Vector.h"

namespace FullEngine
{
    Vector4 Vector4::operator - (const Vector4& other)
    {
        return Vector4((this->x - other.x), (this->y - other.y), (this->z - other.z), (this->z - other.z));
    }

    Vector4 Vector4::operator + (const Vector4& other)
    {
        return Vector4((this->x + other.x), (this->y + other.y), (this->z + other.z), (this->w + other.w));
    }

    Vector4 Vector4::operator * (const int scalar)
    {
        return Vector4((scalar * this->x), (scalar * this->y), (scalar * this->z), (scalar * this->w));
    }

    Vector4 Vector4::operator * (const float scalar)
    {
        return Vector4((scalar * this->x), (scalar * this->y), (scalar * this->z), (scalar * this->w));
    }

    float Vector4::Dot(const Vector4& other)
    {
        return (this->x * other.x) + (this->y * other.y) + (this->z * other.z);
    }

    Vector3& Vector3::Cross(const Vector3& other)
    {
        return Vector3((this->y * other.z) - (this->z * other.y),
                        (this->z * other.x) - (this->x * other.z),
                        (this->x * other.y) - (this->y * other.x));
    }
}