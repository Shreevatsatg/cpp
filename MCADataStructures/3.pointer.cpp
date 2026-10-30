#include <iostream>
#include<cstring>

using namespace std;

int main(){
    int a=100;
    int *ptr=&a;
    int *pt=&a;
    printf("%d",*ptr);
    printf("%d", pt);

    return 0;

};