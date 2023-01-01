# include<stdio.h>
void greet();//function prototype
    
    int main(){
    int a;
    printf("GOOD MORNING\n");
    greet();//function call
    printf("GOOD NIGHT\n");
    return 0;
}
void greet(){
    printf("GOOD AFTERNOON\n");
}
