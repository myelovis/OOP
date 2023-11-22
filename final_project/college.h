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
    applicant(string n, int id);
    void userid(int); 
    void GPA_drawer(int);
    void Postcode_relocate(int);
    friend bool operator < (const applicant&, const applicant&);
    friend bool operator == (const applicant&, const applicant&);
    friend bool operator << (ostream&, const applicant&);
}; 

class compromise_applicant {
    public:
    bool operator () (applicant*, applicant*) const;
};

class applicant_list {
    private: 
    set<applicant*,compromise_applicant> setPtrsTens; 
    set<applicant*, compromise_applicant>::iterator iter;

    public:
    void insert_applicant(applicant*);
    void display();
};

class applicant_checkin {
    private: 
    applicant_list* ptrApplicantList;
    string fuulname;
    int application_number;

    public:
    applicant_checkin(applicant_list* ptrAL) : ptrApplicationList(ptrAL);
    void getApplicant();
};

class result {
    int application_number;
    string target_degree;
    string fullname;
    int phone_number;
    float evaluated_gpa;
    int src_rate;
    int tuition_fee;
    int competitive_rate;
    float potential_rank;
    int distance_from_home;
}; 

class degree {
    char survey_code;
    int boxcode;
    int fee;
    int yearly_intake;
};

class userInterface {
    public:
    userInterface();
    void interact(); 
}; 





