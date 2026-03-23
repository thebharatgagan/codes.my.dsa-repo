// Copy Constructor : It is special constructor used to copy properties of one object to another.

#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subj;
    
    Teacher(string name, string dept, string subj){
        this-> name = name;
        this-> dept = dept;
        this-> subj = subj;
    }
    

    // Copy Constructor: 
    Teacher(Teacher &OrgObj){
        this -> name = OrgObj.name;
        this -> subj = OrgObj.subj;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subj << endl;
    }
};

int main(){
    Teacher t1("Bharat", "ComputerScience", "C++");

    Teacher t2(t1); // default (Custom) copy constructor - call;
    t2.getInfo();

    return 0;

}