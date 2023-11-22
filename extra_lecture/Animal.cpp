#include "Animal.h"
#include <iostream>

// 
Animal::Animal(){std::cout <<"Hello"<<std::endl;}
Animal::Animal(std::string n): name(n) {}
void Animal::setName(std::string n) {name = n;}
std::string Animal::getName() const {return name;}