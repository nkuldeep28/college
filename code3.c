/*program to apply in the job on the basise of btech coputer science total marks*/
#include<stdio.h>
void main(){
    int x;
    printf("WELCOME mr./miss.\n");
    printf("To in our company\n");
    printf("to apply in SOFTWARE ENGINEER job\n");

    printf("enter your total marks in BTECH computer science \n");
    printf("(out of 350)");
    scanf("%d",&x);
    if (x>255)
    {
        printf("congratulation!\n");
        printf("you are eligible to apply in this job.");
    }
    else
    {
        printf("Sorry !\n");
        printf("you are not eligible for this job");
    }
    
}