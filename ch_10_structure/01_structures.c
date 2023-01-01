#include <stdio.h>                                                                                                                                                                                                                                   
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 2234.45;
    strcpy(e1.name, "nitya");

    printf("employee code : %d\n", e1.code);
    printf("employee name : %s\n", e1.name);
    printf("employ salary : %f", e1.salary);
    return 0;
}
