# include<stdio.h>
int sum(int a, int b);

    int main(){
    int a=4, b=7;
    printf("the value of a and b before call is %d and %d\n", a, b);
    printf("the value of a + b is %d\n", sum(a, b));
    printf("the value of a and b after function call is %d and %d", a, b);
    return 0;
}
int sum(int a, int b){
   int c;
   c = a + b;
   b =72888;
   a =6767676;
    return c;
}