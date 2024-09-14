#include <stdio.h>

int themin(int a){

}

int main(){

int num1,num2,min;
printf ("please enter the two numbers to show the smallest one : ");
scanf ("%d",&num1);
scanf ("%d",&num2);

if (num1 < num2){
    min = themin(num1);
}
else if(num1 > num2){
    min = themin(num2);
}

printf ("the smallest number betwen %d and %d is : %d",num1,num2,min);


    return 0;
}