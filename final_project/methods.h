#include "college.h"
#include <iostream>

class degree {
    char survey_code;
    int boxcode;
    int fee;
    int yearly_intake;
};


void inputGrades(int& grade1, int& grade2, int& grade3) {
    std::cout << "Enter grade for subject 1: ";
    std::cin >> grade1;
    std::cout << "Enter grade for subject 2: ";
    std::cin >> grade2;
    std::cout << "Enter grade for subject 3: ";
    std::cin >> grade3;
}

double GPA_drawer(int grade1, int grade2, int grade3) {
    return static_cast<double>(grade1 + grade2 + grade3) * 10 / 3;
}

int Applicant_ID(int ap_phone, int ap_postcode) {
    int ap_id = ap_phone + ap_postcode; 
    return ap_id;
}

int Postcode_relocate(int boxcode) {  
    return boxcode;
}

void applicant::applicant_checkin() {
    std::cout << "Enter fullname: ";
    std::cin >> fullname;  
    std::cout << "Enter Applying Degree name: ";
    std::cin >> target_degree;  
    std::cout << "Enter email: ";
    std::cin >> email;
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    std::cout << "Enter postcode: ";
    std::cin >> postcode;
    std::cout << "Enter GPA: ";
    std::cin >> GPA_1, GPA_2, GPA_3;  
}

void result() {
    std::cout << "Here is the result: \n";
    
}

void userInterface() {
    std::cout << "Welcome applicants! Press a number \n";
    std::cout << "1. Read more about learning programs" << std::endl;
    std::cout << "2. Evaluate Applicant GPA " << std::endl;
    std::cout << "3. Online assistant" << std::endl;
    int choice;
    char cho;  
    std::cin >> choice;
    switch (choice) { 
        case 1:
            std::cout << "Choose: a. Art m. Med s. Science t. Tech.";
            std::cin >> cho;
            switch (cho) {
                case 'a':
                    std::cout << "The Art Program offers a diverse curriculum encompassing visual arts, design, and creative expression. Students explore various mediums, techniques, and art history, fostering their artistic vision and critical thinking skills." << std::endl;
                    break;
                case 'm':
                    std::cout << "The Medicine Program prepares future healthcare professionals through a comprehensive curriculum covering anatomy, physiology, and clinical practice. Students gain practical experience in hospitals, clinics, and laboratories, laying the groundwork for careers in medicine and healthcare." << std::endl;
                    break;
                case 's':
                    std::cout << "The Science Program is designed for students passionate about inquiry and discovery. It covers disciplines such as biology, chemistry, and physics, providing a strong foundation for those pursuing careers in research, healthcare, or academia." << std::endl;
                    break;
                case 't':
                    std::cout << "The Technology Program equips students with cutting-edge skills in computer science, programming, and information technology. Students engage in hands-on projects, learning to develop software, design systems, and solve complex technological challenges." << std::endl;
                    break;
            }
            break;
        case 2:
            applicant new_application;
            new_application.applicant_checkin(); 
            break;
        case 3:
            std::cout << "Call 1920 to get advice from our Online assistant directly." << std::endl;  
            break;
        default:
            std::cout << "Invalid choice. Please select a valid program." << std::endl;
            break;
    }
}
