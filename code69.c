#include<stdio.h>
int main()
{
    int x[6],i,even=0,odd=0;
    for(i=0;i<6;i++)
    {
        printf("enter the value=:");
        scanf("%d",&x[i]);
        if(x[i]%2==0)
        even++;
     else
        odd++;
     }
  printf("even number = %d,odd number =%d\n",even,odd);
}