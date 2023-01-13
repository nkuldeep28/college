/*by purchaing certain items a discount of 10% is offered if the quantity purchaed
is more than 1000 rs ,if quaantity and price are input through the keyboard
write a program to calculate tptal expansives?.*/
#include<stdio.h>
void main(){
    int qty,dis=0;
    float rate,tot;
    printf("enter quantity and rate");
    scanf("%d %f",&qty,&rate);
    if (qty>1000)
    {
        dis = 10;
    }
        tot =(qty*rate)-(qty*rate*dis)/100;
        printf("total expensive is %f",tot);
    }
    
