#include<stdio.h>
void main(){
    int x=20,y=40,z=45;
    if(x>y&&x>z)
    printf("biggest=%d\n",x);
    else if (y>x&&y>z)
    printf("biggest=%d\n",y);
    else if (z>x&&z>y)
    printf("biggest%d\n",z);
}
