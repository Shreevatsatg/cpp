// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isprime(int num){
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// cout<<"answers are"<<endl;
// for(int i=a;i<=b;i++){
//     if(isprime(i)){
//         cout<<i<<endl;
//     }
// }
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial =1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans =fact(n);
//     cout<<ans<<endl;
//     return 0;

// }

#include<iostream>
using namespace std;

int fact(int n){
    int factorial =1;
    for(int i=0;i<=n;i++){
factorial*=i;

    }
    return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}