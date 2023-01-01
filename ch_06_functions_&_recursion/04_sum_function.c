# include<stdio.h>
//sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b);//function prototype declaration
int product(int e, int d);

    int main(){
    int c;
    int f;
    int g;
    c = sum(2, 5); //function call*/
    f = product(2, 5);//function call
    g = product(4, 5);//function call
    printf("the value of c is %d\n", c);
    printf("the value of f is %d\n", f);
    printf("the value of g is %d\n", g);
    return 0;
}
int sum (int a, int b){
    int result;
    result = a + b;
    return result;
}
int product (int e, int d){
    int result;
    result = e * d;
    return result;
}