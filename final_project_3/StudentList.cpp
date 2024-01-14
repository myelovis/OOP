// StudentList.cpp
#include "StudentList.h"
#include <iostream>
#include <fstream>

void StudentList::addStudent(const Student& student) {
    students.push_back(student);
}

void StudentList::displayMenu() const {
    std::cout << "\nMenu:\n"
              << "1. Check student status (Pass/fail)\n"
              << "2. Enter student information\n"
              << "3. Exit\n";
}

void StudentList::displayStudentStatus(int studentID) const {
    bool found = false;
    for (const Student& student : students) {
        if (student.getStudentID() == studentID) {
            found = true;
            std::cout << "Student ID: " << student.getStudentID() << ", Name: " << student.getName()
                      << ", Status: " << (student.canPass() ? "Pass" : "Fail") << "\n";
            break;
        }
    }

    if (!found) {
        std::cout << "Student with ID " << studentID << " not found.\n";
    }
}

void StudentList::displayPassingStudents() const {
    std::cout << "Passing Students:\n";
    for (const Student& student : students) {
        if (student.canPass()) {
            std::cout << "ID: " << student.getStudentID() << ", Name: " << student.getName() << ", GPA: " << student.getGPA() << "\n";
        }
    }
}

bool StudentList::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        return false;
    }

    for (const Student& student : students) {
        outFile << student.getStudentID() << ',' << student.getName() << ',' << student.getGPA() << ','
                << student.getEmail() << ',' << student.getPhone() << ',' << student.getPostcode() << '\n';
    }

    outFile.close();
    return true;
}

bool StudentList::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        return false;
    }

    students.clear(); // Clear existing student data

    int studentID;
    std::string name, email, phone, postcode;
    double gpa;

    while (inFile >> studentID >> std::ws && std::getline(inFile, name, ',') >> gpa >> std::ws &&
           std::getline(inFile, email, ',') >> std::getline(inFile, phone, ',') >>
           std::getline(inFile, postcode)) {
        students.emplace_back(name, studentID, gpa, email, phone, postcode);
    }

    inFile.close();
    return true;
}
