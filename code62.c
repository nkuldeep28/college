#include<stdio.h>
void main(){
    int n,t1=0,t2=1,nextterm;
    printf("enter the number");
    scanf("%d",&n);
    printf("the fibonacci series %d,%d,",t1,t2);
    nextterm=t1+t2;
    while(nextterm<=n){
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        
    }
}