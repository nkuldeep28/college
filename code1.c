/* write a program to enter a value less the 10 of x and print Hello World equal if more than
10 print Hello c.*/
#include<stdio.h>
void main(){
    int x;
    printf("enter the value of x\n");
    scanf("%d",&x);
    if(x<10)
    {
        printf("Hello World");
    }
    else
    {
        printf("Hello C");   
    }
    
} 