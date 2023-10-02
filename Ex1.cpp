/*
Teacher: Sara Kfouri
Student: Lovisa Nguyen 2104554
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Exercise 1: Write a C++ program that prints the first 10 natural numbers using a while loop" << std::endl;
    int x = 0; 
    while (x < 10) {
        std::cout << x << std::endl; // Output the value of x and end the line endl = endline
        x = x + 1;
    }

    std::cout << "// Excercise 2: Write a C++ program to print numbers from 10 to 1 in reverse order using a do-while loop" << std::endl;
    int b = 10;
     do {
        std::cout << b << std::endl;
        b--;
    } while (0 < b);

    std::cout << "Write a C++ program that finds the sum of all even numbers between 1 and 100 using a while loop" << std::endl;
    int a = 2;
    int c = 0;
    while(a < 100) {
        c = a + a;
        a = a+2;
    }
    std::cout << c << std::endl;

    std::cout << "Write a C++ program that reads numbers from the user until the user enters 0, and then prints the sum of the entered numbers using a do-while loop" << std::endl;
    int number;
    int sum = 0;
    do {
        std::cout << "Enter a number ";
        std::cin >> number;
        sum = sum + number;
    } while (number != 0);
    std::cout << sum << std::endl;

    std::cout << "Write a C++ program that reads an array of integers and prints the sum of the digits of each number in the array using a while loop";
    const int array_size = 100;
    int n[array_size];
    int uas;
    std::cout << "Enter the size of the array: ";
    std::cin >> uas;
    std::cout << "Enter array's number separated by spaces:  ";
    for (int i = 0; i < uas; ++i) {std::cin >> n[i];}
    std::cout << "Sum of digits for each number in the array: ";
    for (int i = 0; i < uas; ++i) {
        int num = n[i];
        int digitSum = 0;
        while (num > 0) {
            digitSum += num % 10; 
            num /= 10;     
        }
        std::cout << digitSum << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse elements of an Array using do-while loop";
    const int arr_size = 10;
    int ana[arr_size];
    int uass;
    std::cout << "Enter the size of the array: ";
    std::cin >> uass;
    std::cout << "Enter array's number separated by spaces:  ";
    for (int ji = 0; ji < uass; ++ji) {std::cin >> ana[ji];}
    int khoidau = 0;
    int ketthuc = uass - 1;
    do {
        int tamthoi = ana[khoidau];
        ana[khoidau] = ana[ketthuc];
        ana[ketthuc] = tamthoi;
        ++khoidau;
        --ketthuc;
    } while (khoidau < ketthuc);
    std::cout << "Reversed array shown nyt: ";
    for (int i = 0; i < uass; ++i) {
        std::cout << ana[i] << " ";
    }
    return 0;
}

