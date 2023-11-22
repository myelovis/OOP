#include "Cat.h"

#include<iostream>

// Construct 
Cat::Cat(){
    std::cout << "Hello new Cat" << std::endl;
}
Cat::Cat(std::string n, int catAge): Animal(n), age(catAge) {
    std::cout << "Hello from my second constructor" << std::endl;
} 


// methods

void Cat::meow(){
    std::cout << "Meow" << std::endl;
}
void Cat::scratch(){
    std::cout <<"Scratch scratch"<<std::endl;
}
void Cat::poo(){
    std::cout << "Cat made phoo" << std::endl;
}


void Cat::setColor(std::string c){color = c;}
std::string Cat::getColor() {return color;}

void Cat::setBreed(std::string b) {breed = b;}
std::string Cat::getBreed() {return breed;}

void Cat::setEyes(std::string e){eyes= e;}
std::string Cat::getEyes(){return eyes;}

void Cat::setAge(int a){age = a;}
int Cat::getAge(){return age;}

void Cat::setNumberOfLegs(int n){numberOfLegs = n;}
int Cat::getNumberOfLegs(){return numberOfLegs;}