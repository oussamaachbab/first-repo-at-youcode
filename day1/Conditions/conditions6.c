#include <stdio.h>

int main (){

    int a;

    printf ("please enter the number you wanna verify here : ");
    scanf ("%d",&a);


    if (a<0)
    printf ("the number that you entred is a negative number");
    else if (a>0)
    printf ("the number that you entred is a positive number");
    else
    printf ("the number that you entred is 0");







    return 0;
}