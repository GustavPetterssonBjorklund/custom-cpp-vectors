#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>
/**
 * @brief Vector3d class for 3 element double vectors.
 * This allows for easy manipulation of 3 element double vectors with all standard arithmetic operations excluding bitwise operations
 */
class Vector3d {
    public:
        double x;
        double y;
        double z;

        Vector3d(double x, double y, double z) : x(x), y(y), z(z) {}

        Vector3d operator+(const Vector3d& other) {
            return Vector3d(x + other.x, y + other.y, z + other.z);
        }

        Vector3d operator-(const Vector3d& other) {
            return Vector3d(x - other.x, y - other.y, z - other.z);
        }

        Vector3d operator*(const Vector3d& other) {
            return Vector3d(x * other.x, y * other.y, z * other.z);
        }

        Vector3d operator/(const Vector3d& other) {
            return Vector3d(x / other.x, y / other.y, z / other.z);
        }

        Vector3d operator=(const Vector3d& other) {
            x = other.x;
            y = other.y;
            z = other.z;
            return *this;
        }

        Vector3d operator+=(const Vector3d& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }

        Vector3d operator-=(const Vector3d& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }

        bool operator==(const Vector3d& other) {
            return x == other.x && y == other.y && z == other.z;
        }

        bool operator!=(const Vector3d& other) {
            return x != other.x || y != other.y || z != other.z;
        }

        void print() const {
            std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
        }

};

#endif // VECTOR3D_H