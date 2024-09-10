#include <stdio.h>   

int main (){

int a,b;
//int c = (a+b)+(a+b)+(a+b);
//int d = a+b;

printf ("please entere the two numbers : ");
scanf ("%d",&a);
scanf ("%d",&b);


if (a==b){ 
printf ("the triple of the total of the two numbers is : %d" ,(a+b)*3);
 }
else
printf ("the total of the two numbers is : %d" ,a+b);





    return 0;
}