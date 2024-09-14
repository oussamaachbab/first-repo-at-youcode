#include <stdio.h>

int themax(int a){
    
}

int main (){
int num1,num2,max;

printf ("please enter the two numbers to show you the bigger one : ");
scanf ("%d",&num1);
scanf ("%d",&num2);

if (num1 > num2){

    max = themax(num1);
}
else if (num1 < num2){

    max = themax(num2);
}

printf ("the bigger number betwen %d and %d is : %d",num1,num2,max);





    return 0;
}