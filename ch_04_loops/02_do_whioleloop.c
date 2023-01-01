# include<stdio.h>

    int main(){
    int i = 0;//kam se kam ek baar toh run krta hai
    //pehle execute then checks
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    do{
        printf("%d\n", i+1);
        i++;
    }while(i<n);
    return 0;
}