// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name, int studentID, double gpa, const std::string& email,
            const std::string& phone, const std::string& postcode);

    int getStudentID() const;
    const std::string& getName() const;
    double getGPA() const;
    bool canPass() const;

    // Additional information
    const std::string& getEmail() const;
    const std::string& getPhone() const;
    const std::string& getPostcode() const;

private:
    int studentID;
    std::string name;
    double gpa;
    std::string email;
    std::string phone;
    std::string postcode;
};

#endif // STUDENT_H
