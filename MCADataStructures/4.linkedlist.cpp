#include<iostream>

using namespace std;

/*
linked list functions :
1.push front
2.push back
3.pop front
4.pop back
*/

struct node{
    int data;
    node* next;
    
    node(int val):data(val),next(nullptr){}
};

void printlist(node* head){
    node* current=head;
    while(current!=nullptr){
        cout<<current->data<<"->";
        current =current->next;
    }
    cout<<"nullptr"<<endl;
}

void insertathead(node*& head, int val){
    node* newnode=new node(val);
    newnode->next=head;
    head=newnode;
}

int main(){
    

node* head =nullptr;

node* first=new node(10);
node* second=new node(20);
node* third=new node(30);

head=first;
first->next=second;
second->next=third;

printlist(head);
insertathead(head,5);
printlist(head);


return 0;
};
