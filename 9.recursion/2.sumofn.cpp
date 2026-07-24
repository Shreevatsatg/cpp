#include<iostream>

using namespace std;

int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}

int main(){
    cout<<sum(4); //ans 10
    return 0;
}
/*
time complexity:
=total calls* work in each call
=n*k
=O(n)

space complexity:
=depth of tree * spce in each call
=O(n)(no other space used other than call stack) (thats why for this problem for loop is better its of same time but less space which is better)

*/