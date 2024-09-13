#include <stdio.h>

int main (){

//declaration est request the informatin
    int a,i;
    printf ("please enter the number that you want here :");
    scanf ("%d",&a);


    printf ("the table of multiplication of %d is : \n");

//boucle for and print the resualt
    for (i=0;i<=10;i++){
        printf ("%d X %d = %d \n", a,i,i*a);
    }









    return 0;
}