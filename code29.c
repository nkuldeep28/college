#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("plese enter your marks-\n");
    printf("in english-\n");
    scanf("%d",&a);
    printf("in maths-\n");
    scanf("%d",&b);
    printf("in computer science-\n");
    scanf("%d",&c);
    printf("in science-\n");
    scanf("%d",&d);
    printf("in hindi-\n");
    scanf("%d",&e);
   f=a+b+c+d+e;
   g=(f/5);
   printf("you get :%d",g);
    if (g>95)
   { printf("A++");
    if(g>90)
    printf("A+");
   if(g>80)
    printf("A");
   if(g>70)
    printf("B");
   if(g>60)
    printf("C");
   if(g>50)
    printf("D");
   if(g>40)
    printf("E");}
   else
   { 
    printf("fail");
   }

}