#include <iostream>
#include <cmath>  

// Function to calculate the area of a circle
constexpr double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a square
constexpr double areaOfSquare(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
constexpr double areaOfRectangle(double length, double width) {
    return length * width;
}

// Function to calculate the surface area of a cylinder
constexpr double surfaceAreaOfCylinder(double radius, double height) {
    return 2 * M_PI * radius * (radius + height);
}

int main() {
    int choice;
    std::cout << "Select the shape to calculate the area:\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Square\n";
    std::cout << "3. Rectangle\n";
    std::cout << "4. Cylinder (Surface Area)\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            double circleArea = areaOfCircle(radius);  // Runtime calculation
            std::cout << "The area of the circle is: " << circleArea << "\n";
            break;
        }
        case 2: {
            double side;
            std::cout << "Enter the side length of the square: ";
            std::cin >> side;
            double squareArea = areaOfSquare(side);  // Runtime calculation
            std::cout << "The area of the square is: " << squareArea << "\n";
            break;
        }
        case 3: {
            double length, width;
            std::cout << "Enter the length of the rectangle: ";
            std::cin >> length;
            std::cout << "Enter the width of the rectangle: ";
            std::cin >> width;
            double rectangleArea = areaOfRectangle(length, width);  // Runtime calculation
            std::cout << "The area of the rectangle is: " << rectangleArea << "\n";
            break;
        }
        case 4: {
            double radius, height;
            std::cout << "Enter the radius of the cylinder: ";
            std::cin >> radius;
            std::cout << "Enter the height of the cylinder: ";
            std::cin >> height;
            double cylinderSurfaceArea = surfaceAreaOfCylinder(radius, height);  // Runtime calculation
            std::cout << "The surface area of the cylinder is: " << cylinderSurfaceArea << "\n";
            break;
        }
        default:
            std::cout << "Invalid choice!\n";
            break;
    }

    return 0;
}


