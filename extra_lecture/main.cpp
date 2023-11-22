#include <iostream>
#include "Cat.h"
#include "Cat.cpp"
#include "Animal.cpp"
#include "Animal.h"

int main(){
   Cat mimi("Mimi", 7);
   
   // mimi.meow();
  // mimi.phoo();
   //mimi.name = "Mimi";
  //   mimi.age = 7;
   //mimi.setName("MiMMi");
   //mimi.eyes = "green";
   //mimi.numberOfLegs = 4;
   //mimi.breed  = "Scottish Fold";
   std::cout << mimi.getName() << std::endl ;
  // std::cout << mimi.name << " " << mimi.age << " " << mimi.color << std::endl;
  // Cat* cat2 = new Cat();
   //cat2->meow();
   // always use delete when you use new keyword 
  // delete cat2;
return 0;
}