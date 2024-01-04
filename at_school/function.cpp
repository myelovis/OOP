#include <iostream>
using namespace std;
/*Function*/
/*You cannot create a nest-function in C++ as in Python*/

void greetings(string name, string city ="Pori") {   /*The parameters with the default value must be after the parameter without default. */
    std:cout << "Calm dowm " << name << ": You come from " << city << endl;
}
string fullname (string firstname, string secodnanme) {
    string name = firstname + " " + secodnanme;
    return name;
}
void greetings (string name, int age, string city= "Pori") {
    std:cout << "Hi" << name << " " << age << city << "Welcome";
}
int main() {
    string name = fullname ("Some", "Kos");
    greetings("Anna", "Nosta");
    greetings("Anna", 38);
    return 0;
}
