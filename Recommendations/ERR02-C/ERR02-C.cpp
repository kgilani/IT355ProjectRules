#include <iostream>
#include <string>
#include <stdexcept>

// Function prototype
bool safe_divide(int numerator, int denominator, int& result) noexcept;

int main() {
    int numerator = 10;
    int denominator = 0;  // A potential runtime issue
    int result;

    // Using safe_divide, which does not use in-band error indicators
    if (safe_divide(numerator, denominator, result)) {
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cerr << "Error: Division by zero" << std::endl;
    }

    return 0;
}

// Function definition
bool safe_divide(int numerator, int denominator, int& result) noexcept {
    // Check for division by zero
    if (denominator == 0) {
        return false;  // Indicate an error without using in-band error indicators
    }

    result = numerator / denominator;
    return true;  // Indicate success
}
