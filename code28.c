#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter your current year\n");
    scanf("%d",&a);
    printf("enter your joning year\n");
    scanf("%d",&b);
    c = (a - b);
    if(c>3)
    {
        printf("you get 3000 rs bonas");
    }
    else
    {
        printf("no bonus");
    }

}