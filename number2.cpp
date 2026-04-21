#include <iostream>
#include <cmath>   // Required for the pow() function
#include <iomanip> // Required to format decimal output

int main() {
    double radius, volume;
    // Define PI manually as there is no universal constant in every C++ standard
    const double PI = 3.14159265358979323846;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // We use 4.0 / 3.0 to ensure floating-point division.
    // pow(radius, 3) computes r cubed.
    volume = (4.0 / 3.0) * PI * std::pow(radius, 3);

    // Set precision to show 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The volume of the sphere is: " << volume << std::endl;

    return 0;
}