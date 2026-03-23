#include<iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;

    // Parameterised Constructor: 

    Teacher(string n, string d, string s){
        name = n;
        dept = d;
        subject = s;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
    }
};

int main(){
    Teacher t1("BharatGagan", "ComputerScience", "C++");
    t1.getInfo();

    return 0;

}