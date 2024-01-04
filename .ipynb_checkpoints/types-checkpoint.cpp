#include <iostream>
int main() {
    unsigned int x = 0; /*Unsigned type: receive only positive values*/
    char c = 'B';  /*For text*/
    bool isTrue = true; /*Boolean type, true, false or yes, no*/
    unsigned int number1; /*Define a variable before putting a value to it possibli done in C++*/
    string name = "Sara Kfouri Koskinen"; /*For text, but longer than char*/
    constexpr int MY_NUMBER = 5; /*similar to const, but faster excecuted*/
    int arr[MY_NUMBER] = {1,2,3,4,5} /*the array can have mximum of 5 values in this case, as MY_NUMBER = 5*/
    x = x-1;	
    float x = 3.14f; /*take float value, with infinite after the .*/
    double y = 3.141592653589793; /*take float with exact value after the .*/
    int y = 5; /*interger type*/
    unsigned int a = 10; // 'a' can hold values from 0 to 4294967295 (for a 32-bit system)
    unsigned short b = 5; // 'b' can hold values from 0 to 65535 (for a 16-bit short)
    unsigned long c = 1000000000; // 'c' can hold large positive values up to 4294967295 (for a 32-bit long) 
    const int happy = 10; /*Unmovable value type*/
    cout << x zz endl;
    return 0;
}