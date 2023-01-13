//all arithmetic operators
#include<stdio.h>
void main(){
    int a=19,h=20,i=10,b,c,d,e,f,g;
    b=a++;
    c=a&&b;
    d=a||b;
    e=a^b;
    f=a/b;
    g=++f;
    h%=a;
    i+=d;

    printf("\n%d",b );
        printf("\n%d",c );
            printf("\n%d",d );
                printf("\n%d",e);
                    printf("\n%d",f );
          printf("\n%d",g );
          printf("\n%d", h);
          printf("\n%d", i);}
