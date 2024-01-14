// Student.cpp
#include "Student.h"

// Constructor
Student::Student(const std::string& name, int studentID, double gpa, const std::string& email,
                 const std::string& phone, const std::string& postcode)
    : name(name), studentID(studentID), gpa(gpa), email(email), phone(phone), postcode(postcode) {}

// Getter functions
int Student::getStudentID() const {
    return studentID;
}

const std::string& Student::getName() const {
    return name;
}

double Student::getGPA() const {
    return gpa;
}

const std::string& Student::getEmail() const {
    return email;
}

const std::string& Student::getPhone() const {
    return phone;
}

const std::string& Student::getPostcode() const {
    return postcode;
}

// Function to check if the student can pass
bool Student::canPass() const {
    return gpa >= 2.0; // Adjust the passing criteria as needed
}
