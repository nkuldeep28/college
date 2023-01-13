#include<stdio.h>
void main()
{
    int stud[4][2],i,j;
    for(i=0;i<=3;i++)
    {
        printf("\n enter roll no. and marks");
        scanf("%d%d",&stud[i][0], &stud[i][1]);
    }
    for(i=0;i<=3;i++)
    printf("\n%d %d", stud[i][0], stud[i][1]);
    
}