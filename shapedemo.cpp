#include <iostream>
#include <vector>
#include "circle2.hpp"
#include "rect.hpp"

int main() {
    std::vector<Shape*> shapes;

    Circle circle(5.0);
    Rectangle rectangle(3.0, 4.0);

    shapes.push_back(&circle);
    shapes.push_back(&rectangle);

    for (const auto& shape : shapes) {
        shape->draw();
    }

    return 0;
}
