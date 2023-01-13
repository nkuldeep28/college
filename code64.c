#include<stdio.h>
void main()
{
    long int num,d,xv=0;
    printf("enter the integer\n");
    scanf("%d",&num);
    while(num!=0){
    d= num%10;
    xv= xv*10+d;
    num= num/10;
    }
    printf("reverse = %d",xv);
    

}