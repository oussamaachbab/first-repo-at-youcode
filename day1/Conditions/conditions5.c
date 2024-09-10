#include <stdio.h>

int main (){

int a;
int mounth,days,hours,minutes,seconds;

printf ("please enter how many years you wanna convert : ");
scanf ("%d",&a);

mounth = a*12;
days = a*365;
hours = a*8765;
minutes = a*525949;
seconds = a*31556952;

printf ("here is a list of %d years converted to mounths and days...\n",a);
printf ("%d years = %d mounths \n",a,mounth);
printf ("%d years = %d days \n",a,days);
printf ("%d years = %d hours \n",a,hours);
printf ("%d years = %d minutes \n",a,minutes);
printf ("%d years = %d seconds \n",a,seconds);










    return 0;
}