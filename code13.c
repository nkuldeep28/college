#include<stdio.h>
void main(){
    float b,c,a=0;
    printf("the distance in km");
    scanf("%f",&a);
    b=a*1000;
    c=a*100000;
    printf("the distance in m : %f",b);
    printf("the distance in cm : %f",c);
}