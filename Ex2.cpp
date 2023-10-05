/*
Teacher: Sara Kfouri
Student: Lovisa Nguyen 2104554
*/

#include <iostream>

int main() {
    
    std::cout << "Ex1: Write a program to check if a number is positive, negative or zero. Use if \n";
    int number;
    std::cout << "Enter a number to check its positiveness: \n";
    std::cin >> number;
    if (number > 0) {
        std::cout << "It is positive";
    } else if (number < 0) {
        std::cout << "It is negative";
    } else {
        std::cout << "It is zero positive, but not negative";
    }

    std::cout << "\n Ex2: Determine the largest number from three numbers. Use if \n";
    int so1, so2, so3;
    std::cout << "Enter three numbers: \n ";
    std::cin >> so1 >> so2 >> so3;
    if (so1 >= so2 and so1 >= so3) {
        std::cout << "The largest number is: " << so1;
    } else if (so2 >= so1 && so2 >= so3) {
        std::cout << "The largest number is: " << so2;
    } else {
        std::cout << "The largest number is: " << so3;
    }

    std::cout << "\n Ex3: Given 2 numbers, print 'Both are positive' if both of them positive, otherwise print 'at least one is not positive' Use nest-if\n ";
    int conso1, conso2;
    std::cout << "Let input 2 numbers, hey :) \n";
    std::cin >> conso1 >> conso2;
    if (conso1 > 0) {
        if (conso2 > 0) {
            std::cout << "Both are positive\n";
        }
        if (conso2 < 0)
         {
            std::cout << "At least one of them is not positive\n";
        }
    } 

    std::cout << "\n Ex4: Given a number from 1-7, print them corresponding the day of week. Use Switch\n ";
    int day = 4;
    switch (day) {
        case 1: std::cout << "Mon\n"; break;
        case 2: std::cout << "Tue\n"; break;
        case 3: std::cout << "Wed\n"; break;
        case 4: std::cout << "Thurs\n"; break;
        case 5: std::cout << "Fri\n"; break;
        case 6: std::cout << "Sat\n"; break;
        case 7: std::cout << "Sun\n"; break;
        default: std::cout << "Invalid day number\n"; break;
    }

    std::cout << "\n Ex5: Given a \n ";




    return 0;
}
