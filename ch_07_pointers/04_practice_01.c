# include<stdio.h>

    int main(){
    int a=2;
    int *b=&a;
printf("the value of i is %d\n", a);
printf("the address of i is %d\n", *b);
//printf("the value of i is %d\n", &(*b));
    return 0;
}