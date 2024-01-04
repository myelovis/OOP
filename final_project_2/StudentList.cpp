// StudentList.cpp
#include "StudentList.h"
#include <iostream>
#include <fstream>

void StudentList::addStudent(const Student& student) {
    students.push_back(student);
}

const std::vector<Student>& StudentList::getStudents() const {
    return students;
}

void StudentList::displayPassingStudents() const {
    std::cout << "Passing Students:\n";
    for (const Student& student : students) {
        if (student.canPass()) {
            std::cout << "ID: " << student.getStudentID() << ", Name: " << student.getName()
                      << ", GPA: " << student.getGPA() << "\n";
        }
    }
}

bool StudentList::saveToFile(const std::string& filename) const {
    std::ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        return false;
    }

    for (const Student& student : students) {
        outputFile << student.getStudentID() << "," << student.getName() << "," << student.getGPA()
                   << "," << student.getEmail() << "," << student.getPhone() << "," << student.getPostcode() << "\n";
    }

    outputFile.close();
    return true;
}

bool StudentList::loadFromFile(const std::string& filename) {
    students.clear(); // Clear existing students

    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        return false;
    }

    int studentID;
    std::string name;
    double gpa;
    std::string email;
    std::string phone;
    std::string postcode;

    while (inputFile >> studentID >> std::ws && std::getline(inputFile, name, ',') &&
           inputFile >> gpa >> std::ws && std::getline(inputFile, email, ',') &&
           std::getline(inputFile, phone, ',') && std::getline(inputFile, postcode)) {
        Student student(name, studentID, gpa, email, phone, postcode);
        students.push_back(student);
    }

    inputFile.close();
    return true;
}
