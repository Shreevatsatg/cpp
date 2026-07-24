#include<iostream>

using namespace std;

void printnums(int n){
    cout<<n<<" ";
    if(n==1) return;
    printnums(n-1);
}//time complexity =TC(n)=O(1)+TC(n-1)

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
/*
=>methods to find time complexity of recursion

1.recurence relation
2.TC =total number of calls * work in each call (more used)

1.recurence relation:
f(n)=k+f(n-1)
f(n-1)=k+f(n-2)
...
f(1)=1+f(0)

total =f(n)=k*n+k2
=TC=O(n) (after removing constants)

2.total number of calls * work in each call:
total number of calls =n
work in each call =O(1)
total=O(n*k)
=TC=O(n)

both give same answer at the end

=> space complexity:
note: recursion uses call stack so space complexity changes from normal loop
SC=height of call stack * memory in each call
SC=n*k
SC=O(n)(although we dont have any variable recursion uses O(N) for call stack by default)

*/

int main(){
    printnums(4);
    cout<<factorial(3); 
    return 0;
}