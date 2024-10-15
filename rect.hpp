#pragma once
#include "shape.hpp"
#include <cmath>

class Rectangle : public Shape {
public:
    Rectangle(double x, double y, double width, double height) 
        : Shape(x, y), width(width), height(height) {}

    Rectangle(double width, double height) 
        : Rectangle(0, 0, width, height) {}

    double getWidth() const { return width; }
    double getHeight() const { return height; }

    double perimeter() const { return 2 * (width + height); }
    double area() const { return width * height; }

    // Overriding the draw method from Shape
    void draw() const override {
        std::cout << "Drawing Rectangle(x=" << getX() 
                  << ", y=" << getY() 
                  << ", width=" << width 
                  << ", height=" << height << ")" << std::endl;
    }

private:
    double width, height;
};
