#include <stdio.h>

int declarthefunction(int a,int b);

int declarthefunction(int a,int b)
{
return a*b;


}


int main(){

    int num1,num2,result;
printf("please enter the two numbers you wanna multiply here :");
scanf ("%d",&num1);
scanf ("%d",&num2);

result = declarthefunction(num1,num2);

printf ("the total of %d by %d is : %d",num1,num2,result);





return 0;

}