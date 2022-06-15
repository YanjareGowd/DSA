#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}}; // compelete array created inside stack
    int *b[3];                // partially array created in stack i.e pointer array in stack and array in heap
    int **c;
    int i,j;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    b[0]=(int *)malloc(4*sizeof(int));
    b[1]=(int *)malloc(4*sizeof(int));
    b[1]=(int *)malloc(4*sizeof(int));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    c=(int **)malloc(3*sizeof(int));       // complete array created in heap
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
