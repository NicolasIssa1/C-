#pragma once
#include "shape.hpp"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double x, double y, double radius) : Shape(x, y), radius(radius) {}

    double getRadius() const { return radius; }

    // Implementing the draw() method
    void draw() const override {
        std::cout << "Drawing Circle(x=" << getX() 
                  << ", y=" << getY() 
                  << ", radius=" << radius << ")" << std::endl;
    }
};
