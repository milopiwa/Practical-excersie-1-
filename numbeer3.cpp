#include <iostream>

// Function to calculate area
double calculateArea(double side) {
    return side * side;
}

// Function to calculate perimeter
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    // Check for valid input
    if (side < 0) {
        std::cout << "Side length cannot be negative." << std::endl;
        return 1;
    }

    // Calling the functions and storing/displaying results
    double area = calculateArea(side);
    double perimeter = calculatePerimeter(side);

    std::cout << "--- Square Properties ---" << std::endl;
    std::cout << "Area:      " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}