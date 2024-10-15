#pragma once

class Rectangle
{
private:
    double x, y, width, height;

public:
    Rectangle(double x, double y, double width, double height);
    Rectangle(double width, double height);

    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;   // Ensure this is declared

    double perimeter() const;
    double area() const;
};
