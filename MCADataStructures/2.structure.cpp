#include <iostream>
#include<cstring>

using namespace std;

int main(){

// typedef struct{
//     int rollno;
//     char name[50];
//     float gpa;
// } student;
// student s1={1042, "arjun kumar",8.75f};
// student s2;
// s2.rollno=2001;
// strcpy(s2.name,"pritya sharma");
// s2.gpa=9.20f;
// printf("%d %-12s %.2f\n");

typedef struct{
    int srn;
    char name[50];
} contact;

typedef struct{
    int srn;
    char name[50];
    long long pno;
    int seats;
    bool status;
    contact cont;
} participant;

participant p1={1001,"arpit",9876543210,25,true,{
    101,"aman"}};
printf ( p1.cont.name);

return 0;
}