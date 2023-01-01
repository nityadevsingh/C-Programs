# include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

    int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("goodmorning NITYA\n");
    goodafternoon();//indirectly called
}
void goodafternoon(){
    printf("goodafternoon NITYA\n");
    goodnight();
}
void goodnight(){
    printf("goodnight NITYA\n");
}