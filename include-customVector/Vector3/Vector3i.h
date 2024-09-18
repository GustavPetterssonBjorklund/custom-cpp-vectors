#ifndef VECTOR3I_H
#define VECTOR3I_H

#include <iostream>
/**
 * @brief Vector3i class for 3 element integer vectors.
 * This allows for easy manipulation of 3 element integer vectors with all standard arithmetic operations excluding bitwise operations
 */
class Vector3i {
    public:
        int x;
        int y;
        int z;

        Vector3i(int x, int y, int z) : x(x), y(y), z(z) {}

        Vector3i operator+(const Vector3i& other) {
            return Vector3i(x + other.x, y + other.y, z + other.z);
        }

        Vector3i operator-(const Vector3i& other) {
            return Vector3i(x - other.x, y - other.y, z - other.z);
        }

        Vector3i operator*(const Vector3i& other) {
            return Vector3i(x * other.x, y * other.y, z * other.z);
        }

        Vector3i operator/(const Vector3i& other) {
            return Vector3i(x / other.x, y / other.y, z / other.z);
        }

        Vector3i operator%(const Vector3i& other) {
            return Vector3i(x % other.x, y % other.y, z % other.z);
        }

        Vector3i operator=(const Vector3i& other) {
            x = other.x;
            y = other.y;
            z = other.z;
            return *this;
        }

        Vector3i operator+=(const Vector3i& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }

        Vector3i operator-=(const Vector3i& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }

        bool operator==(const Vector3i& other) {
            return x == other.x && y == other.y && z == other.z;
        }

        bool operator!=(const Vector3i& other) {
            return x != other.x || y != other.y || z != other.z;
        }

        void print() const {
            std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
        }

};

#endif // VECTOR3I_H