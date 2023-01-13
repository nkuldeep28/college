#include<stdio.h>
int main()
{
    int number;
    char character;
    float float_number;

    printf("Enter the integer:");
    scanf("%d",&number);

    printf("\nEntered integer is:%d",number);

    printf("\nEnter the float:");
    scanf("%f",&float_number);

    printf("\nEntered float is:%f",float_number);

    printf("\nEnter the Character");
    scanf("%c",&character);

    printf("\nEntered Character is:%c",character);

    return 0;

}