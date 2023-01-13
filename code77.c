#include<stdio.h>
#define N 10
int main()
{
    int a[N],i,p=0,n=0,z=0;
    printf("enter %d element of arrary",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else{
            z++;
        }
    }
    printf("positive no.=: %d",p);
    printf("\nnegetive no.=: %d",n);
    printf("\nzero elements=: %d",z);
    
}