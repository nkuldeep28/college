#include<stdio.h>
int main()
{
    int avg,sum=0,i,marks[6];
    for(i=0;i<6;i++)
    {
        printf("enter the marks of subject :");
        scanf("%d",&marks[i]);
        sum+=marks[i];
        avg=sum/6;
    }
    printf("total marks=: %d",sum);
    printf("average marks=: %d",avg);
}