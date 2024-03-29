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
    char continueInput;

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
                int queryStudentID;
                std::cout << "Enter student ID to check status: ";
                while (!(std::cin >> queryStudentID) || queryStudentID <= 0) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input. Enter a positive integer for student ID: ";
                }

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
                do {
                    std::string name, email, phone, postcode;
                    int studentID;
                    double gpa;

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
                    while (!(std::cin >> gpa) || gpa < 0 || gpa > 5.0) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid input. Enter a GPA between 0 and 5.0: ";
                    }

                    std::cout << "Enter student email: ";
                    std::cin.ignore();
                    std::getline(std::cin, email);

                    std::cout << "Enter student phone: ";
                    std::cin >> phone;

                    std::cout << "Enter student postcode: ";
                    std::cin >> postcode;

                    // Tạo khuôn một sinh viên
                    Student newStudent(name, studentID, gpa, email, phone, postcode);
                    studentList.addStudent(newStudent);

                    std::cout << "Student added successfully.\n";

                    // if not Lưu thông tin ngay sau khi tạo lập vào file
                    if (!studentList.saveToFile("students.txt")) {
                        std::cerr << "Error saving student information to file.\n";
                        return 1; // Exit with a sai-code
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

    // Cho xem dữ liệu của sinh viên thông qua
    studentList.displayPassingStudents();

    // Lưu thông tin kế nối thẩm thấu vào file txt
    if (studentList.saveToFile("students.txt")) {
        std::cout << "Student data saved to file.\n";
    } else {
        std::cerr << "Failed to save student data to file.\n";
    }

    // Tải dữ liệu từ file txt và bắt đầu truy xuất dữ liệu nền tảng 
    if (studentList.loadFromFile("students.txt")) {
        std::cout << "Student data loaded from file.\n";
        studentList.displayPassingStudents(); // Đặc tả dữ liệu cho phụ huynh
    } else {
        std::cerr << "Failed to load student data from file.\n";
    }

    std::cout << "Press >>Enter<< to Confirm exit-Act"; 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

/*
 g++ -o studentPass main.cpp Student.cpp StudentList.cpp

./studentPass
*/