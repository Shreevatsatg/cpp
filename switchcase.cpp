//multiple language robot
#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"input a chrector"<<endl;
    cin>>button;
    //if(button=='a'){
     //   cout<<"hello";
    //}
    //else if(button=='b'){
    //    cout<<"namste";
    //}
    //else if(button=='c'){
    //    cout<<"selute";
    //}
    //else if(button=='d'){
    //    cout<<"namaskar";
    //}else{
    //    cout<<"i am still learning ";
    //}
    switch(button)
    {case 'a':
    cout<<"hello"<<endl;
    break;
    case 'b':
    cout<<"namaste"<<endl;
    break;
    case 'c':
    cout<<"selute"<<endl;
    break;
    case 'd':
    cout<<"namaskar"<<endl;
    break;

    default:
    cout<<"no correct selection"<<endl;
    break;
    }           
    
    return 0;
}