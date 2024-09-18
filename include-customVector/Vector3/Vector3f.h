#ifndef VECTOR3F_H
#define VECTOR3F_H

#include <iostream>
/**
 * @brief Vector3f class for 3 element float vectors.
 * This allows for easy manipulation of 3 element float vectors with all standard arithmetic operations excluding bitwise operations
 */
class Vector3f {
    public:
        float x;
        float y;
        float z;

        Vector3f(float x, float y, float z) : x(x), y(y), z(z) {}

        Vector3f operator+(const Vector3f& other) {
            return Vector3f(x + other.x, y + other.y, z + other.z);
        }

        Vector3f operator-(const Vector3f& other) {
            return Vector3f(x - other.x, y - other.y, z - other.z);
        }

        Vector3f operator*(const Vector3f& other) {
            return Vector3f(x * other.x, y * other.y, z * other.z);
        }

        Vector3f operator/(const Vector3f& other) {
            return Vector3f(x / other.x, y / other.y, z / other.z);
        }

        Vector3f operator=(const Vector3f& other) {
            x = other.x;
            y = other.y;
            z = other.z;
            return *this;
        }

        Vector3f operator+=(const Vector3f& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }

        Vector3f operator-=(const Vector3f& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }

        bool operator==(const Vector3f& other) {
            return x == other.x && y == other.y && z == other.z;
        }

        bool operator!=(const Vector3f& other) {
            return x != other.x || y != other.y || z != other.z;
        }

        void print() const {
            std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
        }

};

#endif // VECTOR3F_H