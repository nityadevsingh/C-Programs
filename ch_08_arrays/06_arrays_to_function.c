# include<stdio.h>

void printarray(int *ptr, int n){

    for(int i = 0; i<n; i++){
    printf("the value of element %d is %d\n", i+1, *(ptr+i));
    }
    ptr[2] = 5555;// the value will be changed in array of main as well
}
    int main(){
    int array[] = {23,42,324,4,24,242,23,4,42,4};
    printarray(array, 10);
    printf("%d", array[2]);
    return 0;
}