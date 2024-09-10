#include <stdio.h>

int main (){

char a;

printf ("please enter a character here:");
scanf ("%c",&a);


if ((a>=65&&a<=90)||(a>=97&&a<=122)){
    if (a>=65&&a<=90)
    printf ("this is a uppercase character");
    else if (a>=97&&a<=122)
    printf ("this is a lowercase character");
}
else
printf ("this is not a charater");







    return 0;
}