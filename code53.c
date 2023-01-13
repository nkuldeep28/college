#include<stdio.h>
void main(){
    int x,y;
    printf("entecor the value");
    scanf("%d\n %d",&x,&y);
    if(x==0&&y==0)
    {
    printf("origin");
    }
    else if (x!=0&&y==0)
    {
        printf("x-axis\n");
    }
    else if(x==0&&y!=0)
    {
        printf("y-axis\n");
    }
}