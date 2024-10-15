#pragma once
class Shape {
protected:
    double xorigin, yorigin;
public:
    Shape(double x = 0, double y = 0) : xorigin(x), yorigin(y) {}
    virtual ~Shape() {}

    double getX() const { return xorigin; }
    double getY() const { return yorigin; }

    // Pure virtual method for polymorphism
    virtual void draw() const = 0;
};
