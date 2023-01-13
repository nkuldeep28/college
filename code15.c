#include<stdio.h>
void main(){
    float a,b,c,d,e,t,av;
    printf("in english out of 100\n");
    scanf("%f",&a);
    printf("in maths out of 100\n");
    scanf("%f",&b);
    printf("in computer out of 100\n");
    scanf("%f",&c);
    printf("in science out of 100\n");
    scanf("%f",&d);
    printf("in hindi out of 100\n");
    scanf("%f",&e);
    t = a+b+c+d+e;
    

    printf("total marks obtaind by student is: %f\n",t);
    av = (t/5);
    printf("Percentage obtaind by student is: %f", av);
    printf("%");
    }

    
   