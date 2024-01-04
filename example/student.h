#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <numeric>
#include <random>
#include <map>
using namespace std;


class Student {
private: 
    string name; 
    string degree_intention;
    string email;
    string phone;
    string postcode;
    float GPA_1, GPA_2, GPA_3;
public:
    Student(const std::string& n, const std::string& degree, const std::string& e, const std::string& p, const string& post, 
    const float& p1, const float& p2, const float& p3): 
    name(n), degree_intention(degree), email(e), phone(p), postcode(post), GPA_1(p1), GPA_2(p2), GPA_3(p3) {}
    int student_id_number(); 
    void student_Register(); 
    float GPA_drawer();
    void result(); 
    void distance_via_postcode();
    friend class PupilReport;
    Student() : GPA_1(0.0), GPA_2(0.0), GPA_3(0.0) {}
};

class Degree {
    private:
        string degree_name;
        string degree_code;
        int tution_fee;
        float competive_rate;
    public:
        Degree(const std::string& de_n,  const std::string& de_c, const int& de_f, const float& de_c_r):
        degree_name(de_n), degree_code(de_c), tution_fee(de_f), competive_rate(de_c_r) {} 
        void degree_package();
        friend class PupilReport;
};

class PupilReport {
private:
    std::vector<Student> students;
    float GPA_drawer();
    void distance_via_postcode(Student degree_intention);
    Student student;
    Degree degree;
public:
    int student_id_number();
    Degree tution_fee; 
    Degree competitve_rate;
    float potential_rank(Student degree_intention); 
    void pupilReport();
};


class ParentPanel {
private:
public:
    ParentPanel();
    void interact();
}; 
