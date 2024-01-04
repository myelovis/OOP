#include "student.h"

void Student::student_Register() {
    
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);

    std::cout << "Enter degree intention: ";
    std::getline(std::cin, degree_intention);

    std::cout << "Enter email: ";
    std::getline(std::cin, email);

    std::cout << "Enter phone: ";
    std::cin >> phone;

    std::cout << "Enter postcode: ";
    std::cin >> postcode;

    std::cout << "Enter GPA for subject 1: ";
    std::cin >> GPA_1;

    std::cout << "Enter GPA for subject 2: ";
    std::cin >> GPA_2;

    std::cout << "Enter GPA for ssubject 3: ";
    std::cin >> GPA_3;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

float Student::GPA_drawer() {
    return (GPA_1 + GPA_2 + GPA_3) / 3.0f;
}

int Student::student_id_number() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 100);
    return distribution(gen);
} 

float PupilReport::potential_rank(Student degree_intention) {

}

void PupilReport::distance_via_postcode(Student degree_intention) {

}

void PupilReport::pupilReport() {
    for (size_t i = 0; i < students.size();) {
        const auto& Student = students[i];
        std::cout << "Applicant ID: " << student_id_number << '\n' << std::endl;
        std::cout << "Name: " << student.name <<'\n' << std::endl;
        std::cout << "Email: " << student.email <<'\n' << std::endl;
        std::cout << "Phone: " << student.phone <<'\n' << std::endl;
        std::cout << "Degree Intention: " << student.degree_intention <<'\n' << std::endl;
        std::cout << "Estimated distance from home: " << degree.tution_fee << '\n' << std::endl;
        std::cout << "Estimated tution fee per year: " << degree.tution_fee << '\n' << std::endl;
        std::cout << "Competitive rate: " << degree.competive_rate << '\n' << std::endl;
        std::cout << "Potential rank based on GPA: " << potential_rank << '\n' << std::endl;
        
    }  
}

int main()
{
    Student student;
    student.student_Register();
return 0;
}    