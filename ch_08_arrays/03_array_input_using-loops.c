# include<stdio.h>

    int main(){
    int marks[5];

    for(int i=0; i<5; i++){

        printf("ENTER THE VALUE OF MARKS FOR STUDENT %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<5; i++){

        printf("THE VALUE OF MARKS FOR STUDENT %d is : %d \n ", i+1, marks[i]);
    
    }
    return 0;
}