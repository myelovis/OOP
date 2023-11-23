#include <iostream> 
#include <vector> 
#include <set> 
#include <string>
#include <algorithm> 
#include <numeric>
using namespace std;

class applicant {
    private:
    string fullname;
    string target_degree;
    int birthdate; 
    int postcode; 
    int application_number;
    string email;
    int phone_number;
    int GPA_1, GPA_2, GPA_3;
    

    public:
    void Applicant_ID(int); 
    void GPA_drawer(int);
    void Postcode_relocate(int);
    void applicant_checkin();
}; 



class degree {
    char survey_code;
    int boxcode;
    int fee;
    int yearly_intake;
};






