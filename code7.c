/*calculate area of of rectangle . by inputing langth and breadth throught the keyboard*/
#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("enter the length of rectangle\n");
    scanf("%d",&a,c);
    printf("enter the width of rectangle\n");
    scanf("%d",&b,d);
    int area = a*b;
    printf("the area of rectangle is : %d\n",area);
    int perimeater = (a+b)*2;
    printf("the perimeater of rectangle is : %d\n",perimeater);
}