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

    std::cout << "\n Ex5: Given a character, determine if it's a vowel or a consonant. Use Switch Fall-Through (No break).\n ";
    std::cout << "Enter a character";
    char chata;
    std::cin >> chata ;
    switch(chata) { case 'a': case 'e': case 'o':case 'u':case 'i': 
        std::cout << chata << " is a vowel\n";break;
    default:
            std::cout << chata << " is a consonant\n";
    }

    std::cout << "Ex6: Using a switch statement, identify the type of triangle based on side lengths (Equilateral, Isosceles, or Scalene). Use an if condition to check if it forms a valid triangle first. Use If and Switch.\n";
    int canh1, canh2, canh3;
    std::cout << "Enter measures of 3 sides of a triangle:\n";
    std::cin >> canh1 >> canh2 >> canh3;
    if (canh1 + canh2 > canh3 && canh1 + canh3 > canh2 && canh2 + canh3 > canh1) {
        std::cout << "It forms a valid triangle which is a ";
        int ajua;
        if (canh1 == canh2 && canh2 == canh3) {ajua=1;} 
        else if (canh1 == canh2 || canh1 == canh3 || canh2 == canh3) {ajua=2;} 
        else {ajua=3;}
        switch(ajua) {
            case 1: std::cout << "Equilateral triangle\n";break;
            case 2: std::cout << "Isosceles triangle\n";break;
            case 3: std::cout << "Scalene triangle\n";break;
        }
    } 
    else {
        std::cout << " Not form a valid triangle.";
    }

    std::cout << "Ex7: Use the ternary operator to determine if a number is even or odd.Use Ternary Operator\n";
    int conso;
    std::cout << "?Number ";
    std::cin >> conso;
    float tinhtoan;
    tinhtoan == (conso % 2 == 0) ? "Even" : "Odd";
    std::cout << number << " is " << tinhtoan << "\n";

    std::cout << "Ex8: Given two characters, where the first character is either 'A' or 'B' and the second character is one of the vowels, use nested switch statements to print a unique message for each combination.\n";
    char nguyenam, phuam;
    std::cout << "Enter the first character (A or B): ";
    std::cin >> nguyenam;
    std::cout << "Enter the second character (a, e, i, o, or u): ";
    std::cin >> phuam;
    switch (nguyenam) {
        case 'A':
            switch (phuam) {
                case 'a':std::cout << "An ant";break;
                case 'e':std::cout << "An eye";break;
                case 'i':std::cout << "An inner";break;
                case 'o':std::cout << "An open";break;
                case 'u':std::cout << "An user";break;
                default:std::cout << "Must be a vowel";}break;
        case 'B':
            switch (phuam) {
                case 'a':std::cout << "Big ant";break;
                case 'e':std::cout << "Big eye";break;
                case 'i':std::cout << "Big inner";break;
                case 'o':std::cout << "Big open";break;
                case 'u':std::cout << "Big user";break;
                default:std::cout << "Must be a vowel";}break;

    std::cout << "Ex9: Check if a year is a leap year. Use Switch.\n";
    /* Leap Year: if year is divisible by 4 AND not divisible by 100 OR if year is divisible by 400 */
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    int isleapor;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {isleapor = 1;}
    else {isleapor = 0;}
    switch (isleapor) {
        case 1: std::cout << "Is leap year";break;
        case 0: std::cout << "Is not"; break; 
    }
    
    std::cout << "Ex10: Write two versions (using if and switch) of a program to convert a numerical grade to a letter grade (90-100 = A, 80-89 = B, 70-79 = C, 60-69 = D, <60 = F).";
    /*if Version*/
    int rangeaprox;
    std::cout << "Enter the interger number presenting the point:\n";
    std::cin >> rangeaprox;
    if (rangeaprox >= 90 && rangeaprox <= 100) {std::cout << "A";}
    else if (rangeaprox >= 80 && rangeaprox <= 89) {std::cout << "B";}
    else if (rangeaprox >= 70 && rangeaprox <= 79) {std::cout << "C";}
    else if (rangeaprox >= 60 && rangeaprox <= 69) {std::cout << "D";}
    else if (rangeaprox < 60) {std::cout << "F";}
    /*switch Version*/
    int rangeaproxi;
    std::cout << "Enter the integer number representing the point:\n";
    std::cin >> rangeaproxi;
    switch (rangeaproxi) {
        case 90 ... 100:std::cout << "A";break;
        case 80 ... 89:std::cout << "B";break;
        case 70 ... 79:std::cout << "C";break;
        case 60 ... 69:std::cout << "D";break;
        default:std::cout << "F";break;
    }



   



    return 0;
}




    






    return 0;
}
