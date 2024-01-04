#ifndef CAT.H 
#define CAT.H


#include<string>
/*A file with .h is a header file*/



class Cat {
public:
    std::string name;
    std::string color;
    std::string breeds;
     std::string eyes;
    int age;
    int numberOfLegs;

    Cat();
    void meow() const;
    void purr() const;
    void scratch() const;
};
#endif // CAT_H