#include <iostream>
#include <string>

int main() {
    int x = 15;
    if (x == 10) {
        std::cout << "x is 10";
    } else if (x == 15) {
        std::cout << "x is 15";
    } else {
        std::cout << "x is neither 10 nor 15";
    }
    return 0;
}
