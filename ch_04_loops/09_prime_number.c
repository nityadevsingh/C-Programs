# include<stdio.h>

    int main(){
    int n, prime=0;
    printf("enter any number\n");
    scanf("%d", &n);
    for(int i=2;i<n;i++){
        if (n%i==0){
            prime = 1;
            break;
        }
    }
    if (prime==1){
        printf("%d is not a prime number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }
    return 0;
}