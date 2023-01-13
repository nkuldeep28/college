//print anti digonal of the matrix
#include<stdio.h>
void main()
{
    int i,j,arr[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){

                printf("%d",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
    }
}