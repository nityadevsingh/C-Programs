# include<stdio.h>

    int main(){
    int x = 2;
    int y = 3;

    printf("the value of 8*y - 3*x is %d\n", 8*y - 3*x);
    printf("the value of 8*y / 3*x is %d\n", 8*y / 3*x );
    //c lang. do not apply BODMAS in calculation
    //priority
    //1st --> *,/,%
    //2nd --> +,-
    //3rd --> =
    // if it is a tie then it will follow left to right associativity 
    return 0;
}