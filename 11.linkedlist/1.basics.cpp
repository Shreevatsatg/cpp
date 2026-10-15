#include<iostream>

using namespace std;
/*
linked list functions :
1.push front
2.push back
3.pop front
4.pop back
*/
class node{
    public : 
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
 node* head;
 node* tail;

 public:
 list(){
    head=tail=NULL;
 }

 void push_front(int val){
    node* newnode=new node(val);// dynamic
    //node newnode(val);//static object

    if(head ==NULL){
        head =tail =newnode;
        return;
    }
 }
};
int main(){
    list ll;

    return 0;
}