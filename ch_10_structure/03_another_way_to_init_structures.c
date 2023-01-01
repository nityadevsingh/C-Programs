# include<stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
    int main(){
        struct employee nitya = {100, 34.78, "NITYA"};

        printf("code is : %d\n", nitya.code);
        printf("salary is : %0.2f\n", nitya.salary);
        printf("name is : %s", nitya.name);
    
    return 0;
}