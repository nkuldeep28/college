#include <stdio.h>
void main(){
  char a[50],B[50] ;
  int x ;
    printf("WHAT IS YOUR NAME :\n");
    printf("FIRST NAME :\n");
    scanf("%s",&a);
    printf("LAST NAME :\n");
    scanf("%s", &B);
    printf("HELLO ");
    printf("%s %s\n",a,B);


      printf("WELCOME\n");
      printf("To in my company\n");
      printf("To apply in WEB DEVELOPER job\n");

      printf("Enter your total marks in BTECH computer science \n");
      printf("(out of 350):\n");
      scanf("%d", &x);
      if (x > 255)
      {
        printf("CONGRATULATION!\n");
        printf("%s %s\n", a, B);
        printf("You are eligible to apply in this Job.");
      }
      else
      {
        printf("Sorry !\n");
        printf("%s %s\n", a, B);
        printf("You are not eligible for this job.");
      }
    }
