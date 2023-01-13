#include<stdio.h>
void main(){
    int ch;
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("i am in case 1");
        break;
        case 2:printf("i am in case 2");
        break;
        case 3:printf("i am in case 3");
        break;
         default :printf("i am in case default");
         break;
    }
}