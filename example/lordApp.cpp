#include "landlord.h"
int main()
{
userInterface theUserInterface;
theUserInterface.interact();
return 0;
}

/*
# Compile the implementation file
g++ -c landlord.cpp -o landlord.o

# Compile the main file
g++ -c lordApp.cpp -o lordApp.o

# Link the object files into the executable
g++ landlord.o lordApp.o -o lordApp

# Run the executable
./lordApp



*/
