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

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);

    first->next=second; //next will always initialize as nullptr because of contrustor we must assign it to create linked list
    return 0;
}
