#ifndef VECTOR2F_H
#define VECTOR2F_H

#include <iostream>

/**
 * @brief Vector2f class for 2 element float vectors.
 * This allows for easy manipulation of 2 element float vectors with all standard arithmetic operations excluding bitwise operations
 */
class Vector2f {
    public:
        float x;
        float y;

        Vector2f(float x, float y) : x(x), y(y) {}

        Vector2f operator+(const Vector2f& other) {
            return Vector2f(x + other.x, y + other.y);
        }

        Vector2f operator-(const Vector2f& other) {
            return Vector2f(x - other.x, y - other.y);
        }

        Vector2f operator*(const Vector2f& other) {
            return Vector2f(x * other.x, y * other.y);
        }

        Vector2f operator/(const Vector2f& other) {
            return Vector2f(x / other.x, y / other.y);
        }

        Vector2f operator=(const Vector2f& other) {
            x = other.x;
            y = other.y;
            return *this;
        }

        Vector2f operator+=(const Vector2f& other) {
            x += other.x;
            y += other.y;
            return *this;
        }

        Vector2f operator-=(const Vector2f& other) {
            x -= other.x;
            y -= other.y;
            return *this;
        }

        Vector2f operator*=(const Vector2f& other) {
            x *= other.x;
            y *= other.y;
            return *this;
        }

        Vector2f operator++() {
            return Vector2f(++x, ++y);
        }

        Vector2f operator--() {
            return Vector2f(--x, --y);
        }


        bool operator==(const Vector2f& other) {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Vector2f& other) {
            return x != other.x || y != other.y;
        }

        void print() const {
            std::cout << "X: " << x << " Y: " << y << std::endl;
        }        
};

#endif // VECTOR2F_H
