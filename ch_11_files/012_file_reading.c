# include<stdio.h>

    int main(){
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("num.txt", "r");
    fscanf(ptr, "%d", &num1);
    printf("The value of num is %d\n", num1);
    fscanf(ptr, "%d", &num2);
    printf("The value of num is %d", num2);
    fclose(ptr);
    return 0;
}