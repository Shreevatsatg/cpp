#include<iostream>
using namespace std;

int main(){
// int n=4;

// //number inerations
// for(int i=1;i<=n;i++){ //outer loop for column
//     for(int i=1;i<=n;i++)//inner loop for row
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

// //charector iterations
// for(int i=0;i<n;i++){
//     char ch ='a';
//     for(int j=0;j<n;j++){
//         cout<<ch<<" ";
//         ch =ch+1;//increses the ascii value of a =65 +1 =66 is the ascii value of b
//     }
//     cout<<endl;
// }


// int k=1;
// int n=3;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<k<<" ";
//         k++;
//             }
//             cout<<endl;
// }

// char k='A';
// int n=3;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<k<<" ";
//         k+=1;
//             }
//             cout<<endl;
// }

// int n=4;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//     cout<<i+1;
//     }
// cout<<endl;
// }

// char a ='a';
// int n=4;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//     cout<<a;
//     }
//     a+=1;
// cout<<endl;
// }

int n=4;
for(int i=0;i<n;i++){
    for (int j=1;j<i+1;j++){
        cout<<j;
    }
    cout<<endl;
}


    return 0;
}

//till lecture 4 ,52:40 mins