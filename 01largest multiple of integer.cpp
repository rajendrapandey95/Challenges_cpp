#Create a program that finds the next largest multiple of integer j, and rounds off integer i to that value. For instance, if i is 256 days and j is a week, the program should round i to the nearest multiple of j, resulting in 259.
#include <iostream>

// Function to round integer i to the nearest multiple of j
int roundToMultiple(int i, int j) {
    // Check if i is already a multiple of j
    if (i % j == 0) {
        return i; // Return i if it is already a multiple of j
    }
    
    // Calculate and return the next largest multiple of j
    return i + (j - i % j);
}

int main() {
    int i, j;
    
    // Prompt the user to enter the value of i
    std::cout << "Enter the value of i: ";
    std::cin >> i;

    // Prompt the user to enter the value of j
    std::cout << "Enter the value of j: ";
    std::cin >> j;

    // Call the roundToMultiple function with input values and store the result
    int roundedValue = roundToMultiple(i, j);

    // Print the rounded value
    std::cout << "The rounded value is: " << roundedValue << std::endl;

    return 0;
}
