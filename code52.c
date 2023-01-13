#include<stdio.h>
void main(){
    int x,y,r,dis,d;
    printf("enter the values");
    scanf("%d",&x,&y,&r);
    dis=r*r;
    if(d==0){
        printf("point lies on the circle");
    }
    else if(d>dis){
        printf("point lies outside the circle");
    }
    else if(d<dis){
        printf("point lies inside the circle");
    }
}