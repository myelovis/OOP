// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    // Constructor
    Student(const std::string& name, int studentID, double gpa, const std::string& email,
            const std::string& phone, const std::string& postcode);

    // Getter functions
    int getStudentID() const;
    const std::string& getName() const;
    double getGPA() const;
    const std::string& getEmail() const;
    const std::string& getPhone() const;
    const std::string& getPostcode() const;

    // Function to check if the student can pass
    bool canPass() const;

private:
    // Member variables
    int studentID;
    std::string name;
    double gpa;
    std::string email;
    std::string phone;
    std::string postcode;
};

#endif // STUDENT_H
