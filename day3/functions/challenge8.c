#include <stdio.h>

int  pairouimpair(int a){
    if (a % 2 == 0){
        return 1 ;
    }
    else {
        return 0;
    }
}
int main (){
    int b;
    printf ("please enter the number you wanna check here : ");
    scanf ("%d",&b);


    if (pairouimpair(b)){
        printf ("the number %d is pair",b);
    }
    else{
        printf ("the number %d is impair",b);
    }

    return 0;
}

