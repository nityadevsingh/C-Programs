# include<stdio.h>

    int main(){
    int i = 34;
    int *ptr = &i;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    //ptr++;
    //ptr--;
    printf("the value of ptr after is %u\n", ptr);
    return 0;
}
