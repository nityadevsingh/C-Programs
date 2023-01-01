# include<stdio.h>

    int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    //ptr = marks___is also correct
    
    for(int i = 0; i <4; i++){
        printf("ENTER THE VALUE OF MARKS OF STUDENT %d:  ", i+ 1);
        scanf("%d", ptr);
        ptr++;
    }
    for(int i = 0; i <4; i++){
        printf(" THE MARKS OF STUDENT %d IS : %d \n", i + 1, marks[i]);
    }
    return 0;
}