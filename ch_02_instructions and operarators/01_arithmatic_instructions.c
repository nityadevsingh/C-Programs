#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;
    printf("the value of a + b is %d\n", a + b);
    printf("the value of a - b is %d\n", a - b);
    printf("the value of a * b is %d\n", a * b);
    printf("the value of a / b is %d\n", a / b); // it will be 0 coz it is 0.4 and it is assigned as 0 incase of(int/int)
                                                 // it will be 0.4 if it was 4.0/8 as it is (float/int)
    int z;
    z = b * a; // legal
    // b * a = z; illeagal
    printf("the value of z is %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    //type conversion
    //int and int --> int
    //int and float --> float
    //float and float --> float
    return 0;
}