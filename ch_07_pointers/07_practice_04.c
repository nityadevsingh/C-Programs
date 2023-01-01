# include<stdio.h>
void sumAndavg(int a, int b, int*sum, float *avg){// void function cannot return any value unless and
                                                  //untill any indirect change is not done
    *sum = a + b;
    *avg = *sum/2;
}

    int main(){
    int i, j, sum; 
    float avg;
    i = 3;
    j = 6;
    sumAndavg(i, j, &sum, &avg);
    printf("the value of sum is %d \n", sum);
    printf("the value of average is %f\n", avg);
    return 0;
}