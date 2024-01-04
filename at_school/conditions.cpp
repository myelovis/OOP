#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    int max;
    max = (x > y) ? x : y; // If x is greater than y, max is assigned x. Otherwise, max is assigned y.
    std::cout << "Maximum value is: " << max << "\n";
    float age = 18.5;
    string description = (age < 18) ? "minor" : "adult";

    return 0;
}
