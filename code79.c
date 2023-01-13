#include<stdio.h>
void main()
{
    int n,i,arr[n],min,max;
    printf("enter the size of array =:::: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        min=arr[0]; max=arr[0];

    }
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }else if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("maximum element are ::::=:::: %d",max);
    printf("\nminimum element are ::::=:::: %d",min);
}