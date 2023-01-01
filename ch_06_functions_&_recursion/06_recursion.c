# include<stdio.h>
int factorial(int x);

    int main(){
    int a = 6;
    printf("the value of %d! is %d", a, factorial(a));
    return 0;
}
int factorial(int x){
    printf("calling (%d)\n", x);
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}