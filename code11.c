#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("ENTER THE BASIC SALERY\n");
    scanf("%d",&a);
    c = 0.40*a;
    b = 0.20*a;
    d = a+b+c;
    printf("TOTAL SALERY IS : %d\n",d);
}