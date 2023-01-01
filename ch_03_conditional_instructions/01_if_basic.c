// c program wghether to check that the number is odd or even
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0){
    printf("%d is even\n", a);
    }
else
{
    printf("%d is a odd number\n", a);
}
return 0;
}