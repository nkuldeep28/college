#include<stdio.h>
void main(){
    int a, b, c, d;
    printf("enter the four digit no.\n");
    scanf("%d",&a);
    b = a/1000;
    c = a%10;
    d = b+c;
    printf("the sum is %d\n",d);
}