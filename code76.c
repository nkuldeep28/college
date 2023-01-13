#include <stdio.h>
void main()
{
    int i,j,arr[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        printf("arr[%d][%d]",i,j);
        scanf("%d",&arr[i][j]);
    }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\narr[%d][%d]",i,j );
            printf("%d",arr[i][j]);
        }
    }
}