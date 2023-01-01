# include<stdio.h>

    int main(){
    int i = 34;
    int *j = &i;//j will now stores the  address of i//
   // int j = &i;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the address of i is %d\n", &i);
    printf("the address of i is %d\n", j);
    printf("the address of j is %d\n", &j);
    printf("the value of i is %d\n", *(&j));
    printf("the value of i is %d\n", i);

    return 0;
}