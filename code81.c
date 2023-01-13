#include<stdio.h>
void main()
{
    int i,arr[10];
    for(i=0;i<10;i++)
    {
        printf("enter the elements : ");
        scanf("%d",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0){
            printf("even no. are : %d",arr[i]);
        }else{
            printf("odd no. are : %d",arr[i]);
        }
    }
}