#include<iostream>
#include<string>
using namespace std;

// Single Inheritance:

class Person{ // Parents Class, Base Class
    public:
    string name;
    int age;

    Person(){
        cout << "Parents Constructor" << endl;
    }
};

class Student : public Person{ // Child Class, Derived Class
    public:
    int roll_no;

    Student(){
        cout << "Child Constructor" << endl;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main(){
    Student s1;
    s1.name = "Bharat";
    s1.roll_no = 21;
    s1.getInfo();
    return 0;
}