// StudentList.h
#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"
#include <vector>

class StudentList {
public:
    void addStudent(const Student& student);
    const std::vector<Student>& getStudents() const;
    void displayPassingStudents() const;
    bool saveToFile(const std::string& filename) const;
    bool loadFromFile(const std::string& filename);

private:
    std::vector<Student> students;
};

#endif // STUDENTLIST_H
