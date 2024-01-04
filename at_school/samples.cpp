#include <iostream>

int main() {
    int number = 356;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit from the number
    }

    std::cout << "Sum of digits of 356: " << sum << std::endl;

    return 0;
}
