
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val):data(val),next(nullptr){};
};

void pll(Node* st){
     while(st!=nullptr){
        cout<<st->data<<" ";
        st=st->next;
    }
}
int main(){
    
    Node* first=new Node(10);
    Node* second=new Node(20);

    first->next=second;
    pll(first);
return 0;
}