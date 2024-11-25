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

// int min(int a,int b){//parameters
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
// int a,b ;
// cout<<"enter the two numbers ";
// cin>>a>>b;
// cout<<"minimum of two is ="<<min(a,b);//arguments
//     return 0;
// }

// int sum(int n){
// int ans=0 ;
// for (int a=1;a<n+1;a++){
//     ans +=a;
// }
// return ans;
// }
// int main(){
// int n;
// cout<<"enter the number";
// cin>>n;
// cout<<sum(n);
//     return 0;
// }

//pas by reference creates a copy of the original value changes to it doesn't affect the original value in the main function

//program to output the sum of digits of a number
// int main(){
// int n,l=0,d=0;
// cout<<"enter a number ";
// cin>>n;
// while(n>0){
//     l=n%10;
//     n=n/10;
//     d+=l;
// }
//     cout<<d;
//     return 0;
// }

// int fact(int n){
//     int fact=1;
//     for(int i=0;i<n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int ncr(int n,int r){
//     int fact_n=fact(n);
//     int fact_r=fact(r);
//     int fact_nmr =fact(n-r);
// return fact_n/fact_r*fact_nmr;
// }

// int main(){
//     int n,r;
//     cout<<"enter value for n ";
//     cin>>n;
//     cout<<"enter value for r ";
//     cin>>r;
//     cout<<ncr(n,r)<<endl;
//     return 0;
// }

