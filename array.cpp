#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    arr[0] = 10;
    int lengthArr = sizeof(arr) / sizeof(arr[0]);

    // Output each element in the array
    for (int i = 0; i < lengthArr; i++) {
        std::cout << arr[i] << " "; // Output each element separated by a space
    }
    for (int num:arr) {
        std::cout << num << std::endl;
    }
    
    std::cout << std::endl; // Add a newline character at the end

    int x = 10; 
    while (x > 0) {
        std::cout << x << std::endl; // Output the value of x and end the line endl = endline
        x = x - 1;
    }

    std::cout << ((5 not_eq 4) or (5 == 0)) << std::endl;
    std::cout << ("Check second") << std::endl;
    

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Your number is: " << number << "!" << std::endl; 

    int age;
    int height;
    std::cout << "Enter your age and height";
    std::cin >> age >> height;
    std::cout << "Age " << age << " Height " << height << std::endl;
    
    int i = 0;
    while (i<5) {
        std::cout << i << std::endl;
        i++;
    }

    int count = 6;
    do {
        std::cout << count << std::endl;
        count++;
    }while(count <5);  // Still do the given condition one time even the while condition is false
    
    return 0; // Should be at the end of the code
}
