/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

const double pi = 3.14159;

int main() {
    int choice;
    double area;

    std::cout << "Geometry Calculator\n"
              << "1. Calculate the Area of a Circle\n"
              << "2. Calculate the Area of a Rectangle\n"
              << "3. Calculate the Area of a Triangle\n"
              << "4. Quit\n"
              << "Enter your choice (1-4): ";

    std::cin >> choice;

    if (choice == 1) {
        double radius;
        std::cout << "Enter the radius: ";
        std::cin >> radius;
        
        if (radius < 0) {
            std::cout << "Error: radius cannot be negative.\n";
            return 0;
        }

        area = pi * radius * radius;
        std::cout << "Area of the circle: " << area << '\n';
    } 
    else if (choice == 2) {
        double length;
        double width;
        std::cout << "Enter the length: ";
        std::cin >> length;
        
        std::cout << "Enter the width: ";
        std::cin >> width;
        
        if (length < 0 || width < 0) {
            std::cout << "Error: length and width cannot be negative.\n";
            return 0;
        }

        area = length * width;
        std::cout << "Area of the rectangle: " << area << '\n';
    } 
    else if (choice == 3) {
        double base;
        double height;
        std::cout << "Enter the base: ";
        std::cin >> base;
        
        std::cout << "Enter the height: ";
        std::cin >> height;
        
        if (base < 0 || height < 0) {
            std::cout << "Error: base and height cannot be negative.\n";
            return 0;
        }

        area = base * height * 0.5;
        std::cout << "Area of the triangle: " << area << '\n';
    } 
    else if (choice == 4) {
        return 0;
    } 
    else {
        std::cout << "Error: choice must be between 1 and 4.\n";
        return 0;
    }

    return 0;
}