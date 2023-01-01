# include<stdio.h>

    int main(){
    int i=0, factorial=1, n;
    printf("enter a integer value\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf("factorial of %d is %d", n, factorial);
    return 0;
}