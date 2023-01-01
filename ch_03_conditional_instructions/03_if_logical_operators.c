# include<stdio.h>

    int main(){
    int age;
    int vippass = 0;
    vippass = 1;
    printf("enter your age\n");
    scanf("%d", &age);
    if((age <=70 && age>=18) || vippass==1)    //but if we write !(vippass==1)then it will do opposite(! == not)
    {               // || is or operator, && is and operator
    printf("you are above 18 and below 70 you can drive\n");
    }
    else{
        printf("you can't drive\n");
    }
    return 0;
}