#include <stdio.h>
#include <stdlib.h>

int *fun(int size)
{
    int *p;
    p=(int *)malloc(size*sizeof(int));
    for(int i=0;i<=size;i++)
    {
        p[i]=i+10;
    }
    return p;
}
int main()
{
    int *ptr;

    int size=5;
    ptr=fun(size);
    for(int i=0;i<=size;i++)
    {

        printf("%d ",ptr[i]);
    }
}
