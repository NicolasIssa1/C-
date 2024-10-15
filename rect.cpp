#include "rect.hpp"

// Constructor with x, y, width, height
Rectangle::Rectangle(double x, double y, double width, double height)
    : x(x), y(y), width(width), height(height) {}

// Constructor with width, height (x, y default to 0)
Rectangle::Rectangle(double width, double height)
    : Rectangle(0, 0, width, height) {}

// Getters
double Rectangle::getX() const { return x; }
double Rectangle::getY() const { return y; }
double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }

// Perimeter method
double Rectangle::perimeter() const {
    return 2 * (width + height);
}

// Area method
double Rectangle::area() const {
    return width * height;
}
