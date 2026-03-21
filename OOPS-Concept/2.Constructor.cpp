#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:

    Teacher(){
        dept = "Computer Science"; // Constructor 
    }

    // Attributes --> Properties:
    string name;
    string dept;

};
int main(){
    Teacher t1; // Constructor Cell
    t1.name = "Bharat Gagan";

    cout << t1.name << endl;
    cout << t1.dept << endl; // ---> Computer Science
    return 0;
}