// Polymorphism --> Virtual Function:

#include<iostream>
#include<string>
using namespace std;

class parent{ // Abstract Class.
    public:

    virtual void getInfo(){
        cout << "Hello";
    }
};

class child : public parent{
    public:

    void getInfo(){
        cout << "Hey";
    }
};
int main(){
    child p1;
    p1.getInfo(); // Output --> Hey

    parent ps1;
    ps1.getInfo(); // Output --> Hello
    return 0;
}