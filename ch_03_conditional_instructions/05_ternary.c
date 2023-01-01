#include <stdio.h>

int main()
{
    int a;

    printf("enter a number\n");
    scanf("%d", &a);

    (a >= 5) ? printf("your number is greater than 5") : printf("your number is less than 5");
    // one liner if else statement
    //if(a < 5){
       // printf("your number is less than 5");
   // }
    //else{
        //printf("your number is greater than 5");
   // }
    return 0;
}