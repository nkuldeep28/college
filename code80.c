#include<stdio.h>
void main()
{
    int arr[10],i;
    printf("enter the array elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
}
check(int num)
{
    if(num%2==0)
    printf("%d  is even\n",num);
    else
    printf("%d  is odd\n",num);
}