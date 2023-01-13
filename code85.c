#include<stdio.h>
#define M 10
void main()
{
    int a[M],i;
    for(i=0;i<M;i++){
        printf("enter the elements");
        scanf("%d",&a[i]);
    }
        for(i=0;i<M;i++){
            printf("the elements are : %d ",a[i]);
        
    }
}