#include <iostream>
#include "rect.hpp"

int main() {
    // Create two Rectangle objects
    Rectangle rect1(0, 0, 4, 5);
    Rectangle rect2(10, 10, 3, 6);

    // Output the perimeter and area of the first rectangle
    std::cout << "Rectangle 1: Perimeter = " << rect1.perimeter() 
              << ", Area = " << rect1.area() << std::endl;

    // Output the perimeter and area of the second rectangle
    std::cout << "Rectangle 2: Perimeter = " << rect2.perimeter() 
              << ", Area = " << rect2.area() << std::endl;

    return 0;
}
