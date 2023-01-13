/*write a program of principal rate and time period and calculate */
#include<stdio.h>
void main(){
    int a, b, c;
    printf("enter PRINCIPAL");
    scanf("%d",&a);
    printf("enter RATE");
    scanf("%d",&b);
    printf("enter TIME");
    scanf("%d",&c);
    int sum = (a*b*c)/100;
    printf("INTEREST : %d",sum);
 
}
