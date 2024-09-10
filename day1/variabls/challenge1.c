#include <stdio.h>
#include <string.h>


int main (){

//variables

int age;
char sexe;
char firstname[40];
char lastname[40];
char email[60];


printf ("please enter your information here: \n");
printf ("age:");
scanf ("%d", &age);


printf ("sexe(h/f):");
scanf ("%c", &sexe);
while (getchar() != '\n');


 
printf("Enter your first name: ");
fgets(firstname, sizeof(firstname), stdin);
firstname[strcspn(firstname, "\n")] = '\0';



printf("Enter your last name: ");
fgets(lastname, sizeof(lastname), stdin);
lastname[strcspn(lastname, "\n")] = '\0';


printf("Enter your email address: ");
fgets(email, sizeof(email), stdin);
email[strcspn(email, "\n")] = '\0';





printf ("here is your information list:\n");
printf ("you are %d years old\n" ,age);
printf ("your gender is %c\n",&sexe);
printf ("your first name is : %c\n",&firstname);
printf ("your lastname is : %c\n",&lastname);
printf ("your email is : %c\n",&email);













    return 0;
}