# include<stdio.h>

    int main(){
    int i = 0;
    do{
        printf("the vale of i is %d\n", i);
        if(i==6){
            break;
        }
        i++;
    }while(i<10);
    return 0;
}