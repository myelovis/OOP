// StudentList.h
#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"
#include <memory>
#include <vector>

class StudentList {
public:
    void addStudent(const Student& student);
    void displayMenu() const;
    void displayStudentStatus(int studentID) const;
    void displayPassingStudents() const;
    bool saveToFile(const std::string& filename) const;
    bool loadFromFile(const std::string& filename);

private:
    std::vector<Student> students;
};

#endif // STUDENTLIST_H
