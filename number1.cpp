#include <iostream>

int main() {
    // We use double for days to allow for partial days (e.g., 1.5 days)
    double days;
    
    std::cout << "Enter the number of days: ";
    std::cin >> days;

    // 24 hours * 60 minutes * 60 seconds = 86,400 seconds per day
    // long long handles very large numbers
    long long seconds = days * 24 * 60 * 60;

    std::cout << days << " days is equal to " << seconds << " seconds." << std::endl;

    return 0;
}