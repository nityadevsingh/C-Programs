# include<stdio.h>
void display();//function prototype
    
    int main(){
    int a;
    printf("initialising display function\n");
    display();//function call
    printf("display function finished its work");
    return 0;
}
void display(){
    printf("hi i am display\n");
}
