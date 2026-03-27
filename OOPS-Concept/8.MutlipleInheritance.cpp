// Multiple Inheritance --> 
// Parent ---> Child <--- Parent

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    string roll_no;

};

class Teacher{
    public:
    string subject;
    float salary;
};

class TA : public Student, public Teacher{

};
int main(){
    TA t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.salary = 25600;

    cout << "Name: " << t1.name << endl;
    cout << "Subject: "<< t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
    return 0;
}
