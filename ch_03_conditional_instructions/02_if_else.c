# include<stdio.h>

    int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if(age<=18){               //!=_____is not equal to
    printf("you are below 18 so you can't drive\n");
    }
    else{
        printf("you can drive\n");
    }
    //if(age=50){_______= is known as assignment_____and == is equals to___
    if(age==50){
        printf("half century");
    }
    return 0;
}