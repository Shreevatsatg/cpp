#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i;
    vector<string>n;
    n.push_back("shree");//useing push_back to push element at the end of the vector
    n.push_back("vatsa");
    n.push_back("tg");
    n.push_back("mgm");
    n.push_back("evening");

    for(i=0;i<5;i++){
        cout<<n[i]<<endl;}
        n.pop_back();

        return 0;

}