#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class SLList{
    public:
    Node* head;
    Node* tail;

    SLList(){
        head = tail = NULL;
    }

    /// Push In Front:
    void addtohead(int val){
        Node* newNode = new Node(val);
        while(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    /// Push in Back;

    void addtotail(int val){
        Node* newNode = new Node(val);
        while(head == NULL){
            head = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


int main(){

    SLList ll;
    ll.addtohead(7);
    ll.addtohead(8);

    ll.addtotail(10);
    ll.addtotail(12);

    ll.printLL();
    return 0;
}