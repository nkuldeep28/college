#include<stdio.h>
void main(){
    int n,r,sum=0,temp;
    printf("enter a num.=");
    scanf("%d",&n);
    temp=n;
    while (n>0);
    {r=n%10;
    sum=sum*10+r;
    n=n/10;
        
    }
    if(temp==sum){
        printf("it is a palindrom:");
    }
    else{
        printf("not a palindrom.");
    }
    
}