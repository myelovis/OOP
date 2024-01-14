// main.cpp
#include "Student.h"
#include "StudentList.h"
#include <iostream>
#include <limits>

int main() {
    StudentList studentList;

    int choice;
    char continueInput;

    do {
        studentList.displayMenu();
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

                studentList.displayStudentStatus(queryStudentID);
                break;
            }

            case 2: {
                // Enter student information
                do {
                    std::string name;
                    int studentID;
                    double gpa;
                    std::string email;
                    std::string phone;
                    std::string postcode;

                    std::cout << "Enter student name: ";
                    std::cin.ignore();
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
                    std::cin.ignore();
                    std::getline(std::cin, email);

                    std::cout << "Enter student phone: ";
                    std::cin >> phone;

                    std::cout << "Enter student postcode: ";
                    std::cin >> postcode;

                    Student newStudent(name, studentID, gpa, email, phone, postcode);
                    studentList.addStudent(newStudent);

                    std::cout << "Student added successfully.\n";
                    std::cout << "Do you want to add another student? (y/n): ";
                    std::cin >> continueInput;

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

    studentList.displayPassingStudents();

    if (studentList.saveToFile("students.txt")) {
        std::cout << "Student data saved to file.\n";
    } else {
        std::cerr << "Failed to save student data to file.\n";
    }

    if (studentList.loadFromFile("students.txt")) {
        std::cout << "Student data loaded from file.\n";
        studentList.displayPassingStudents();
    } else {
        std::cerr << "Failed to load student data from file.\n";
    }

    std::cout << "Press Enter to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
