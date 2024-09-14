#include <stdio.h>

long int themulti(int a){

}


int main (){

int num,result1;

int result = 1;
printf ("please enter the number that you want here : ");
scanf ("%d",&num);

for (int i=1;i<=num;i++){
    result = result * i;
}

result1 = themulti(result);
printf ("the result is : %d",result1);






    return 0 ;
}