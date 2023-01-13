#include <stdio.h>
void main()
{
    int cy,yoj,yos,bonas=0;
    printf("plese enter your current year and year of joning");
    scanf("%d %d",&cy,&yoj);
     yos = (cy - yoj);
    if (yos>3)
    {
        bonas=2500;
        printf("bonas=%d",bonas);
    }
    else {
        printf("no bonus");
    }
    
}