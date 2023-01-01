# include<stdio.h>
float average(int x, int y, int z);

    int main(){
    float a;
    int b, c, d;
    printf("\n                           **WELCOME TO THIS PROGRAM**\n               **THIS PROGRAM CALCULATES AVERAGE OF ANY THREE NUMBERS**\n\n");
    printf("enter your first value \n");
    scanf("%d", &b);
    printf("enter your first value\n");
    scanf("%d", &c);
    printf("enter your first value\n");
    scanf("%d", &d);
    a = average(b, c, d);
    printf("the average of these numbers is %f\n", a);
    return 0;
}
float average(int x, int y, int z){
    float result;
    result = (float)(x + y + z)/3;
    return result;
}