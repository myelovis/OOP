#include <iostream>
#include "Cat.h"

int main() {
    /* Object created on the heap */
    Cat * mimi = new Cat();
    /* Remember to delete the object */
    delete mimi;

    return 0;
}
