#include <iostream>
using namespace std;

/*Pointer*/
/*a pointer is a variable that holds the memory address of another variable. 
In OOP languages like C++ and some versions of C#, pointers 
can be used to store addresses of objects or functions. */
/*Search: Insertion at Beginning in Doubly Linked List in C*/
/*The constant Pointer 's value of memory will not be changed*/
void modifyPointer(int* p) {   /*loval variable*/
    int y = 10;
    p = &y;
    std::cout << p << endl;
}

/*In this function, you are attempting to modify the pointer p to point to the address of the local variable y. However, there are a couple of issues with this code:
Lifetime Issue:
The local variable y is declared inside the function modifyPointer. Once the function execution is completed, the local variables, including y, go out of scope. 
Attempting to access y outside the function results in undefined behavior because y no longer exists after the function returns.
Pointer Assignment:
The assignment p = &y; inside the function modifies the local pointer variable p to point to the address of y. 
However, this change is local to the function. It doesn't affect the pointer passed from the calling function. When the function returns, 
the original pointer passed to the function remains unchanged.*/

void modifyData(int* p) {   /*Modify data inside of a pointer*/
    *p = 100;
}

int main() {
    int number = 4;
    string name = "Whi";
    string* pointer_name = &name;
    /*The ampersand (&) operator is used to get the memory address of the name variable. 
    If name is a string variable declared earlier in the code, 
    &name gives the memory address where the string is stored in the computer's memory.*/
    int* pointer_nopointer = nullptr ;
    int* pointer_number = &number;
    std::cout << &number <<endl;
    std::cout << pointer_name << "\n ";
    std::cout << pointer_number<< "\n ";

    std::cout << pointer_name << endl;
    modifyPointer(pointer_number);
    std::cout << pointer_number << endl;

    modifyData(pointer_number);
    std::cout << "number" << number << endl;
    std::cout << "pointer" << pointer_number << endl;
    return 0;
}