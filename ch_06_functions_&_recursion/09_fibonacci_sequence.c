# include<stdio.h>
 int fib(int x);

    int main(){
    int a;
    printf("enter the number of fibbonacci value\n");
    scanf("%d", &a);
    printf("your fibonacci value is %d\n", fib(a));
    return 0;
}
 int fib(int x){
    //printf("calling\n");
    if(x==1){
    return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
 }