#include  <stdio.h>

int main(){
    int a , b;
    printf("enter the value of a\n");
    scanf("%d", &a);//in order to take input from the user and assign it to a variable,we use scan f function
                    //scanf("%d" , &a);    --> the & is important in this syntax(&="address of the operator")

    printf("enter the value of b\n");
    scanf("%d", &b);

    printf("the sum of a and b is %d", a + b);
    return 0;
}