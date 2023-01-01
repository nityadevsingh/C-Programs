# include<stdio.h>
float force(float mass);
    int main(){
    float m, f;
    // printf("ENTER VALUE OF MASS\n");
    //scanf("%d", &a);
    printf("enter the value of mass in kgs\n");
    scanf("%f", &m);
    f = force(m);
    printf("the force is %.2fNewtons", f);
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}
