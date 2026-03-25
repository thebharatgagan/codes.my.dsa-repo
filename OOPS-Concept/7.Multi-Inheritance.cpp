// Multi-Level Inheritance:
// Parent --> Parent --> Child

#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    public:
    int roll_no;
};

class gradStudent : public Student{
    public: 
    string ResearchSubject;

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Research Subject: " << ResearchSubject << endl;
    }
};
int main(){
    gradStudent s1;
    s1.name = "Bharat";
    s1.roll_no = 25;
    s1.ResearchSubject = "Physics";

    s1.getInfo();

    return 0;
}