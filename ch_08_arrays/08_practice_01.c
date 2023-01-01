# include<stdio.h>

    int main(){
    int arr[10];
    int *ptr=&arr[0];
    ptr = ptr + 2;
    if(ptr==&arr[2]){
        printf("these point have same location\n");
    }
    else{
        printf("these point do not have same location\n");
    }
    return 0;
}