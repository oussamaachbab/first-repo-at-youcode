#include <stdio.h>

int  main (){


float temprature;


printf ("please enter the temprature here :");
scanf ("%f",&temprature);


if (temprature < 0)
   printf ("its solid");

   else if (temprature >= 0 && temprature < 100)
   printf ("its liqued");

   else
   printf ("its gas");






    return 0;
}