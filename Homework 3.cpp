#include <iostream>
#include <cmath>   

using namespace std;

// Function prototypes
//double calculateCircleArea(double radius); 
//double calculateSquareArea(double side);
//double calculateRectangleArea(double width, double height);
//double calculateCylinderArea(double radius, double height);

 int choice;
    double radius, side, width, height;

 double calculateCircleArea = M_PI*radius*radius;
 double calculateSquareArea = side*side;
 double calculateRectangleArea = width*height;
 double calculateCylinderArea = 2*M_PI*radius*height+2*M_PI*radius*radius; 

int main() {
    

    cout << "Area Calculator" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Cylinder" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << calculateCircleArea << endl;
            break;
        case 2:
            cout << "Enter side of the square: ";
            cin >> side;
            cout << "Area of the square: " << calculateSquareArea << endl;
            break;
        case 3:
            cout << "Enter width and height of the rectangle: ";
            cin >> width >> height;
            cout << "Area of the rectangle: " << calculateRectangleArea << endl;
            break;
        case 4:
            cout << "Enter radius and height of the cylinder: ";
            cin >> radius >> height;
            cout << "Surface area of the cylinder: " << calculateCylinderArea << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
