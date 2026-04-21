#include <iostream>

int main() {
    // BEGIN
    // SET x TO 0, y TO 20
    double x = 0.0;
    double y = 20.0;

    // REPEAT ... UNTIL y IS LESS THAN 6
    do {
        // SUBTRACT 4 FROM y
        y = y - 4;

        // ADD 2/y TO x
        x = x + (2.0 / y);

    } while (y >= 6); 

    // DISPLAY x
    std::cout << "The value of x is: " << x << std::endl;

    return 0;
    // END
}