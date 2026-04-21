#include <iostream>

int main() {
    // Declare an array of size 5 and variables for calculation
    double values[5];
    double sum = 0.0;
    double average;

    std::cout << "Please enter 5 numeric values:" << std::endl;

    // i. Use a loop for user to input 5 values to populate the array
    for (int i = 0; i < 5; i++) {
        std::cout << "Value " << (i + 1) << ": ";
        std::cin >> values[i];
        
        // Add current value to sum for the average calculation later
        sum += values[i];
    }

    // ii. Calculate and display the average
    average = sum / 5;

    std::cout << "\n--- Results ---" << std::endl;
    std::cout << "The sum of the values is: " << sum << std::endl;
    std::cout << "The average of the values is: " << average << std::endl;

    return 0;
}