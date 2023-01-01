# include<stdio.h>
float average(int x, int y, int z);

    int main(){
    int a;
    a = average(3, 6, 9);
    printf("the average of these numbers is %d", a);
    return 0;
}
float average(int x, int y, int z){
    int result;
    result = (x + y + z)/3;
    return result;
}