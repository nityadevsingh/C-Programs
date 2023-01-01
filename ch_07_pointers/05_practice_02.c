# include<stdio.h>
void printadd(int a){
    printf("the address of variable a is %u\n", &a);
}
    int main(){
    int i = 3;
    printf("the address of i is %u\n", &i);
    printadd(i);
    return 0;
    }