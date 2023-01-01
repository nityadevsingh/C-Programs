#include <stdio.h>
void pattern(int x);

int main()
{
    int a;
    printf("enter value\n");
    scanf("%d", &a);
    pattern(a);
    return 0;
}
void pattern(int x)
{
    if (x == 1)
    {
        // printf(".");
        printf("*\n");
        return;
    }
    //printf("hi\n");
    pattern(x - 1);
    // printf("hi\n");
    for (int i = 0; i < (2 * x - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}