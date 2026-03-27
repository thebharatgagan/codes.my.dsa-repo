// Polymorphism --> Constructor Overloading:
#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    
    Student(){              // Non-Parameterized Constructor:
        cout << "Non - Parameterized Constructor";
    }

    Student(string name){
        cout << "Parameterized Constructor";

    }
};

int main(){
   Student s1; // Output --> Non- Parameterized Constructor:
   Student s1("Bharat"); // Output --> Parameterized Constructor:


    return 0;
}

// 2. Polymorphism --> Function Overloading:

#include<iostream>
using namespace std;

class fun{
public:

    void show(int x){
        cout << "int: " << x << endl;
    }

    void show(char ch){
        cout << "char: " << ch << endl;
    }
};

int main(){
    fun f1;

    f1.show(3);
    f1.show('A');

    return 0;
}