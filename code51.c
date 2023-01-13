#include <stdio.h>
void main()
{
    char ch;
    printf("enter your choice");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("i am in case a");
        break;
    case 'b':
        printf("i am in case b");
        break;
    case 'c':
        printf("i am in case b");
        break;
    default:
        printf("i am in case default");
        break;
    }
}