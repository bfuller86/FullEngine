// FullEngine. Brian Fuller. August 2013.
//
// Vector.h
// Header of the Vector classes

#ifndef VECTOR_H
#define VECTOR_H 1

#include <iostream>

namespace FullEngine
{
    class Vector4
    {
    public:
        Vector4() : x(0), y(0), z(0), w(0) { };
        Vector4(float X, float Y, float Z, float W) : x(X), y(Y), z(Z), w(W) {  };

        Vector4 operator - (const Vector4&);
        Vector4 operator + (const Vector4&);
        Vector4 operator * (const int);
        Vector4 operator * (const float);

        float Dot(const Vector4&);

        float x;
        float y;
        float z;
        float w;
    };

    class Vector3 : Vector4
    {
    public:
        Vector3() : Vector4() { };
        Vector3(float x, float y, float z) : Vector4(x, y, z, 0) { };

        Vector3& Cross(const Vector3&);
    };
}

#endif