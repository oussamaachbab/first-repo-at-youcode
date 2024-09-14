#include <stdio.h>

int declarthefunction(int a, int b);

int declarthefunction(int a,int b){

    return a + b;
}

int main(){ 

int  firstnumber,secondnumber,result;


printf ("please enter the two numbers");
scanf ("%d",&firstnumber);
scanf ("%d",&secondnumber);

result = declarthefunction(firstnumber, secondnumber) ;

printf ("the total of %d and %d is : %d",firstnumber,secondnumber,result);






   return 0;
} 
