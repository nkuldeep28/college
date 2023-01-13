#include <stdio.h>
int main()
{
    int i,sum=0,arr[13],avg;
    for(i=0;i<13;i++){
        printf("enter number : ");
        scanf("%d",&arr[i]);
        sum+= arr[i];
        avg=sum/13;

    }
    printf(" total :::::---::::%d",sum);
    printf("\naverage ::::----::::%d",avg);
}
