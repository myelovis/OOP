#ifndef ANIMAL_H // Include to prevent double inclusion
#define ANIMAL_H

#include<string>
 
class Animal{
protected:
     std::string name;


public:
    Animal();
    Animal(std::string n);
    void setName(std::string n);
    std::string getName() const;


};
#endif