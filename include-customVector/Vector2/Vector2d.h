#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

/**
 * @brief Vector2d class for 2 element double vectors.
 * This allows for easy manipulation of 2 element double vectors with all standard arithmetic operations excluding bitwise operations
 */
class Vector2d {
    public:
        double x;
        double y;

        Vector2d(double x, double y) : x(x), y(y) {}

        Vector2d operator+(const Vector2d& other) {
            return Vector2d(x + other.x, y + other.y);
        }

        Vector2d operator-(const Vector2d& other) {
            return Vector2d(x - other.x, y - other.y);
        }

        Vector2d operator*(const Vector2d& other) {
            return Vector2d(x * other.x, y * other.y);
        }

        Vector2d operator/(const Vector2d& other) {
            return Vector2d(x / other.x, y / other.y);
        }

        Vector2d operator=(const Vector2d& other) {
            x = other.x;
            y = other.y;
            return *this;
        }

        Vector2d operator+=(const Vector2d& other) {
            x += other.x;
            y += other.y;
            return *this;
        }

        Vector2d operator-=(const Vector2d& other) {
            x -= other.x;
            y -= other.y;
            return *this;
        }

        Vector2d operator*=(const Vector2d& other) {
            x *= other.x;
            y *= other.y;
            return *this;
        }

        Vector2d operator++() {
            return Vector2d(++x, ++y);
        }

        Vector2d operator--() {
            return Vector2d(--x, --y);
        }


        bool operator==(const Vector2d& other) {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Vector2d& other) {
            return x != other.x || y != other.y;
        }

        void print() const {
            std::cout << "X: " << x << " Y: " << y << std::endl;
        }        
};

#endif // VECTOR2D_H
