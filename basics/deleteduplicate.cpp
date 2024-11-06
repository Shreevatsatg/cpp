#include<iostream>
using namespace std;

int main(){
    int n,num[n];
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
    cin>>num[i];
    }
    cout<<"answer is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){

        if(num[i]==num[j]){
            continue;
        }

        cout<<num[i]<<endl;
    }
    }
return 0;
    }


