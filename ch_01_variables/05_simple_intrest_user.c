# include<stdio.h>

    int main(){
    int principal, rate, years;

    printf("what is the principal amount\n");
    scanf("%d", &principal);

    printf("what is the rate on this amount\n");
    scanf("%d", &rate);

    printf("for how much years\n");
    scanf("%d", &years);

    printf("the simple intrest on that amount will be %d", (principal * rate * years)/100);
    return 0;
}