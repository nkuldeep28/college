#include<stdio.h>
void main(){
    int id, pass;
    printf("enter your id");
    scanf("%d",&id);
    switch(id){
        case 2814 :printf("enter your passward");
        scanf("%d",&pass);
        
            switch(pass){
             case 1234 :printf("welcome kuldeep singh");
             break;
             default:printf("wrong passward");
          break;
        }
   break;
    default:printf("wrong id");
    }
    
}