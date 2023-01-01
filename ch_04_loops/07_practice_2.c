# include<stdio.h>

    int main(){
        int a;
        int i = 1;
    printf("ENTER YOUR NUMBER\n");
    scanf("%d", &a);
    printf("THE TABLE OF %d\n\n", a);
    do{
        printf("%d X %d = %d\n", a, i, i*a);
        i++;
    }while(i<11);
    return 0;
}
