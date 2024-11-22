//lecture 5 start
#include<iostream>
using namespace std;

// int  printhello(){//function defnition section
// cout<<"by shreevatsa\n";
// return 3;
// }
// int main(){
// cout<<"hello world\n";
// int val=printhello(); //function call or invoke
// cout<<val;
// return 0;
// }

// int sum(int a,int b){
//     int s=a+b;
//     return s;
// }
// int main(){
// cout<<"answer is "<<sum(4,5);
// return 0;
// }

int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
int c,d ;
cout<<"enter the two numbers ";
cin>>c>>d;
cout<<"minimum of two is ="<<min(c,d);
    return 0;
}