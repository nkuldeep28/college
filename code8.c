#include<stdio.h>
void main(){
    float a,b;
    printf("enter the temprature in F");
    scanf("%f",&a);
    b = (5.0/9.0)*(a-32);
    printf("the temprature in C : %f",b);
}