#ifndef CAT_H // Include to prevent double inclusion
#define CAT_H
#include "Animal.h"
#include<string>
 
class Cat : public Animal {
//private: I only can see from my 
private:
       //Attributes
       std::string color;
       std::string breed;
       std::string eyes;
       int age;
       int numberOfLegs;
 public:
       //Constructor 
       Cat();
       Cat(std::string name, int age);

       //Methods
       void meow();
       void poo();
       void scratch();
       void setColor(std::string c);
       std::string getColor();
       void setBreed (std::string b);
       std::string getBreed ();
       void setEyes (std::string e);
       std::string getEyes();
       void setAge(int a);
       int getAge();
       void setNumberOfLegs(int n);
       int getNumberOfLegs();


};
#endif // 