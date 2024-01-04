// main.cpp
#include "Student.h"
#include "StudentList.h"
#include <iostream>
#include <limits>
#include <memory>

void displayMenu() {
    std::cout << "\nMenu:\n"
              << "1. Check student status (Pass/fail)\n"
              << "2. Enter student information\n"
              << "3. Exit\n";
}

int main() {
    StudentList studentList;

    int choice;
    char continueInput; // Declare continueInput variable

    do {
        displayMenu();
        std::cout << "Enter your choice (1-3): ";
        while (!(std::cin >> choice) || choice < 1 || choice > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Enter a number between 1 and 3: ";
        }

        switch (choice) {
            case 1: {
                // Check student status by entering student ID
                int queryStudentID;
                std::cout << "Enter student ID to check status: ";
                while (!(std::cin >> queryStudentID) || queryStudentID <= 0) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input. Enter a positive integer for student ID: ";
                }

                // Find and display student status
                bool found = false;
                for (const Student& student : studentList.getStudents()) {
                    if (student.getStudentID() == queryStudentID) {
                        found = true;
                        std::cout << "Student ID: " << student.getStudentID() << ", Name: " << student.getName()
                                  << ", Status: " << (student.canPass() ? "Pass" : "Fail") << "\n";
                        break;
                    }
                }

                if (!found) {
                    std::cout << "Student with ID " << queryStudentID << " not found.\n";
                }
                break;
            }

            case 2: {
                // Enter student information
                do {
                    std::string name, email, phone, postcode;
                    int studentID;
                    double gpa; // Add GPA variable

                    std::cout << "Enter student name: ";
                    std::cin.ignore(); // Clear newline from the buffer
                    std::getline(std::cin, name);

                    std::cout << "Enter student ID: ";
                    while (!(std::cin >> studentID) || studentID <= 0) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid input. Enter a positive integer for student ID: ";
                    }

                    std::cout << "Enter student GPA: ";
                    while (!(std::cin >> gpa) || gpa < 0 || gpa > 4.0) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid input. Enter a GPA between 0 and 4.0: ";
                    }

                    std::cout << "Enter student email: ";
                    std::cin.ignore(); // Clear newline from the buffer
                    std::getline(std::cin, email);

                    std::cout << "Enter student phone: ";
                    std::cin >> phone;

                    std::cout << "Enter student postcode: ";
                    std::cin >> postcode;

                    // Create a new student with the provided information
                    Student newStudent(name, studentID, gpa, email, phone, postcode);
                    studentList.addStudent(newStudent);

                    std::cout << "Student added successfully.\n";

                    // Save student information to file immediately after adding
                    if (!studentList.saveToFile("students.txt")) {
                        std::cerr << "Error saving student information to file.\n";
                        return 1; // Exit the program with an error code
                    }

                    std::cout << "Do you want to add another student? (y/n): ";
                    std::cin >> std::ws >> continueInput;

                } while (continueInput == 'y' || continueInput == 'Y');

                break;
            }

            case 3:
                std::cout << "Exiting program.\n";
                break;

            default:
                std::cerr << "Invalid choice. Exiting program.\n";
                break;
        }

    } while (choice != 3);

    // Display passing students
    studentList.displayPassingStudents();

    // Save student data to a file
    if (studentList.saveToFile("students.txt")) {
        std::cout << "Student data saved to file.\n";
    } else {
        std::cerr << "Failed to save student data to file.\n";
    }

    // Load student data from a file
    if (studentList.loadFromFile("students.txt")) {
        std::cout << "Student data loaded from file.\n";
        studentList.displayPassingStudents(); // Display passing students after loading
    } else {
        std::cerr << "Failed to load student data from file.\n";
    }

    std::cout << "Press Enter to exit...";  // Debugging output
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

/*
 g++ -o studentPass main.cpp Student.cpp StudentList.cpp

./studentPass
*/