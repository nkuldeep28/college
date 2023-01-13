#include<stdio.h>
int main()
{
    int x[3],sum;
    
    printf("enter the frist value ");
    scanf("%d",&x[0]);
    printf("enter the second value ");
    scanf("%d",&x[1]);
    printf("enter the third value ");
    scanf("%d",&x[2]);
    sum=x[0]+x[1]+x[2];
    printf("sum of three number is : %d",sum);
    int size=2;
    return 0;

}