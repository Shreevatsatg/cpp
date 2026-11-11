#include <iostream>
using namespace std;
// Blueprint for a single node
struct Node {
    int data;           // The value stored in the node
    Node* next;         // Pointer to the next node in the sequence

    // Constructor to easily initialize nodes
    Node(int val) : data(val), next(nullptr){} /*construstor same as
    Node(int val){
        data=val;
        next=nullptr;
    }
        */
};

Node* merge(Node* a, Node* b){
    Node dummy(0);
    Node* tail = &dummy;
    while(a != nullptr && b != nullptr){
        if(a->data<=b->data){
            tail->next=a;
            a=a->next;
        }else{
            tail->next=b;
            b=b->next;
        }
        tail=tail->next;
    }
    tail->next = (a != nullptr) ? a : b;
    return dummy.next;
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);

    first->next=second; //next will always initialize as nullptr because of contrustor we must assign it to create linked list
    return 0;
}
