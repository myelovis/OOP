#include "Cat.h"
#include<iostream>

//constructor
Cat::Cat() {
    std::cout << "Hi" << std::endl;
}
/*Cat::Cat(std::string& catName, int catAge): name(catName), age(catAge) {
    std::cout << "A cat named" << name << "NIsh" << age;
}
*/


// methods
void Cat::meow() const{
    std::cout << name << "says: Meow!" << std::endl;
}

void Cat::purr() const{
    std::cout << name << "Poh" << std::endl;
}

void Cat::scratch() const{
    std::cout << name << "zt" << std::endl;
}