#include<iostream>
#include<cstring>
using namespace std;

int main()
 {


/*address calculation in 1d array

%d =integer
%.1f = float*/


// int x=5; int y=2;
// printf("x/y  =%d\n",x/y);
// printf("(float)x/y=%.1f\n",(float)x/y);
// char ch='A';
// printf("ch=%c(%d) ch+3 =%c(%d)\n",ch,ch,ch+3,ch+3);
// unsigned char c=250;c=c+10;
// printf("unsigned char 250+10 =%u\n",c);

// int marks[5]={78,91,66,84,70};
// int sum=0;
// for (int i=0;i<5;i++){
//     printf("marks[%d]=%d \n",i,marks[i]);
//         sum+=marks[i];
// }
// printf("sum=%d,average=%.1f\n", sum,sum/5.0);

/*address of a[i]= base + i* size of one element
-> a[0]=1000+0*4 =1000
-> a[1]=1000+1*4=1004*/

// int marks[5]={78,91,66,84,70};
// int sum=0;
// for (int i=0;i<5;i++){
//     printf("marks[%d] =%p value=%d\n",i,(void*)&marks[i],marks[i]);
// }
// printf("gap betweeen negightbours = %ld bytes\n",(long)((char*)&marks[1]- (char *)&marks[0]));

/*2 dimentional array memory address calculation
address of a[i],[j]= base +(i*cols+j)*size */

// int m[3][4];
// char *base=(char*)&m[0][0];
// int i=2,j=1;
// long actual=(char*)&m[i][j]-base;
// long  formula=(i*4+j)*(long)sizeof(int);
// printf("offset of m[2][1] (actual)=%ld bytes\n",actual);
// printf("offset by formula (i*4+j)*4=%ld bytes\n",formula);
// printf("sizeof(m) =%zu bytes\n",sizeof(m));

/*->strings*/
/*%zu= char*/
// char city[]="pune";
// printf("sizeof(city)=%zu\n",sizeof(city));
// printf("strlen(city)=%zu\n",strlen(city));
// for(int i=0;i<(int)sizeof(city);i++){
//     if(city[i]){
//     printf("city[%d]='%c', code %d\n", i, city[i],city[i]);
//     }
//     else{
//     printf("city[%d]='\\0' code %d\n",i,city[i]);
//     }
// }

/*structure*/
typedef struct {
    int rollno;
    char name[50];
    float gpa;
} student;

student s1={1042,"arjun kumar", 8.75};
student s2;
s2.rollno=2001;
strcpy(s2.name,"pritya sharma"); /*not =*/
s2.gpa=9.20;
printf("%d %-12s %.2f\n",s1.rollno,s1.name,s1.gpa);
printf("%d %-12s %.2f\n",s2.rollno,s2.name,s2.gpa);




return 0;
}