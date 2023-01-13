#include<stdio.h>
int main()
{
    int marks[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter the value :");
        scanf("%d",&marks[i]);
    }
    printf("the elements are : \n");
    for(i=0;i<5;i++)
    {
        if(marks[i]>0){
            printf("positive no.=: %d",marks[i]);
            }
            else if (marks[i]<0){
                printf("negetive no.=: %d",marks[i]);
            }
            else{
                printf("zero element=: %d",marks[i]);
            }
            
        }
    
}