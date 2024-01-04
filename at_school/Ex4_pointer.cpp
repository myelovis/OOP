#include <iostream>
#include <string>
/* "Ex2: Write a function swap(int a, int b) that swaps the values of two integers using pointers.";*/ 
void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

void modifyPointer(int** p) {
    int y = 10;
    *p = &y;
    std::cout << *p << std::endl;
}

int main() {
    /*Taks 1*/
    std::cout << "Ex1: Initialize a pointer to an integer and print its value using dereferencing\n";
    int num = 10;
    int* example_pointer = &num; 
    std::cout << "Value of the integer: " << *example_pointer << std::endl;

    /*Task 2*/
    int integer1 = 1;
    int integer2 = 2;
    swap(integer1, integer2);
    std::cout << "After swap takes in action, integer1 is " << integer1 << " and integer2 is " << integer2 << "\n";

    /*Taks 3 Explain a little the pointers , change data and change pointer.. change the data using pointer.*/
    int number = 4;
    int* pointer_number = &number;

    std::string name = "Whindy";
    std::string* pointer_name = &name;

    int* pointer_nopointer = nullptr; // tạo địa chỉ trống mới cho pointer
    modifyPointer(&pointer_nopointer); // định vị địa chỉ của poiter với định danh mới

    return 0;
}

