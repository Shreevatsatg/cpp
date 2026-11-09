#include <iostream>
using namespace std;
// Blueprint for a single node
struct Node {
    int data;           // The value stored in the node
    Node* next;         // Pointer to the next node in the sequence

    // Constructor to easily initialize nodes
    Node(int val) : data(val), next(nullptr){}
};

void pll(Node* st){
     while(st!=nullptr){
        cout<<st->data<<" ";
        st=st->next;
    }
}

void insertback(Node*& head, int val){
    Node* newnode= new Node(val);
    if(head==nullptr){
        head=newnode;
        return;
    }

    Node* current=head;
    while(current->next !=nullptr){
        current=current->next;
    }
    current->next =newnode;

}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);

    first->next=second;
    pll(first);
    
    insertback(first,30);
    pll(first);

    int arr[]={40,50,60,70,80,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        insertback(first,arr[i]);
    }
    pll(first);

    

    return 0;
}
