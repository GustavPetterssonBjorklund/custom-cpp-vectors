#ifndef VECTOR2I_H
#define VECTOR2I_H

#include <iostream>

/**
 * @brief Vector2i class for 2 element integer vectors.
 * This allows for easy manipulation of 2 element integer vectors with all standard arithmetic operations excluding bitwise operations
 */
class Vector2i {
    public:
        int x;
        int y;

        Vector2i(int x, int y) : x(x), y(y) {}

        Vector2i operator+(const Vector2i& other) {
            return Vector2i(x + other.x, y + other.y);
        }

        Vector2i operator-(const Vector2i& other) {
            return Vector2i(x - other.x, y - other.y);
        }

        Vector2i operator*(const Vector2i& other) {
            return Vector2i(x * other.x, y * other.y);
        }

        Vector2i operator/(const Vector2i& other) {
            return Vector2i(x / other.x, y / other.y);
        }

        Vector2i operator%(const Vector2i& other) {
            return Vector2i(x % other.x, y % other.y);
        }
        

        Vector2i operator=(const Vector2i& other) {
            x = other.x;
            y = other.y;
            return *this;
        }

        Vector2i operator+=(const Vector2i& other) {
            x += other.x;
            y += other.y;
            return *this;
        }

        Vector2i operator-=(const Vector2i& other) {
            x -= other.x;
            y -= other.y;
            return *this;
        }

        Vector2i operator*=(const Vector2i& other) {
            x *= other.x;
            y *= other.y;
            return *this;
        }

        Vector2i operator++() {
            return Vector2i(++x, ++y);
        }

        Vector2i operator--() {
            return Vector2i(--x, --y);
        }


        bool operator==(const Vector2i& other) {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Vector2i& other) {
            return x != other.x || y != other.y;
        }

        void print() const {
            std::cout << "X: " << x << " Y: " << y << std::endl;
        }        
};

#endif // VECTOR2I_H
