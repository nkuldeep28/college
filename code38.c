//a quick demo of nested if-else
#include<stdio.h>
int main(){
    int i;
    printf("enter either 1 or 2");
    scanf("%d",&i);
    if(i==1){
        printf("you would go to heaven! \n");
    }
    else{
        if(i==2)
        printf("hell was created with you in mind\n");
        else
        printf("how about mother earth!\n");
    }
}