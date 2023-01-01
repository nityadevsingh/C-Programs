# include<stdio.h>
void change(int *a);

    int main(){
    int  i = 1;
    printf("the value of i before change is %d\n", i);
    change(&i);
    printf("the value of i after change is %d\n", i);

    return 0;
}
void change(int *a){
    int temp;
    int temp2;
    temp = *a;
    temp2 = temp*10;
    *a  = temp2;

}
