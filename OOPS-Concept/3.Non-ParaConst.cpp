#include<iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;

    // Non - parameterised Constructor:

    Teacher(){
        dept = "CS";
    }
};

int main(){
    Teacher t1;
    t1.name = "Bharat Gagan";
    t1.subject = "C++";

    cout << "Name:" << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;

    return 0;
}


