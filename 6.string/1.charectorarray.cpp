#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    char strc[]={'a','b','c','\0'}; //\0 to print them as single string
    cout<<strc<<endl;

    char stri[100];
    cout<<"enter the string";
    cin >>stri; //cin only takes one word stops at a white space

    cin.getline(stri,100);//takes  whole line

    cin.getline(stri,100,'$'); //takes any number of line till we put a $

    char name[]="shreevatsa";
    for(int i=0;i<name[i]!='\0';i++){
        cout<<name[i]<<endl;
    }//normal

    for(char ch:name){
        cout<<ch;
    }// better

    //Strings in c++ (its not a premitive type its a class in c++ STL, we create object of it)
    string str="hello world";
    str="hello"; //string can be changed in run time
    cout<<str; 
    string str1="hello";
    string str2="world";
    string str3=str1+str2;
    cout<<str3;
    cout<<str3.length();
    
    //reverse a string
    // char s[]=["h","e","l","l","o"];
    // int str=0;
    // int end=s.size()-1;
    // while(str <= end){
    // swap(s[str],s[end]);
    // str++;
    // end--;
    // }


    
    return 0;
}