#include<iostream>
using namespace std;

class Teacher{
    public:

    // Attributes --> Properties:
    string name;
    string dept;
    string subject;


    //methods --> Member Functions:
    void Changedept(string newDept){
        dept = newDept;
    }
};
int main(){
    // Object Creation:
    Teacher t1;
    t1.name = "Bharat Gagan";
    t1.dept = "Physics (H)";
    t1.subject = "Waves & Optics";

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    return 0;
}