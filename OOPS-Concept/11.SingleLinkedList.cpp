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

    /// Pop Front --> Remove the value from the head.

    void removetohead(){
        if(head == NULL){
            cout << "List is Empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head == NULL){
            tail = NULL;
        }

        delete temp;
    }

    /// Pop Back --> Remove the value from the tail;

    void removefromtail(){
    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
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

    /// Push in FRONT.
    ll.addtohead(7);
    ll.addtohead(8);

    /// Push in BACK.
    ll.addtotail(10);
    ll.addtotail(12);

    ll.removetohead();

    ll.removefromtail();

    ll.printLL();
    return 0;
}