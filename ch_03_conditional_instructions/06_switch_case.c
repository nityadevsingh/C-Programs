#include <stdio.h>

int main()
{
    int rating;
    printf("enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch (rating) // this is used to give  rating on products
    {
    case 1:
        printf("your rating is 1\n");
        break; // used to end further statement                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ``  1
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("invalid rating\n");
    }
    return 0;
}