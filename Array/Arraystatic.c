#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int a[20];
    int size;
    int length;
};
void display(struct Array arr)
{
    printf("Elements of Array\n");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.a[i]);
    }
}
int main()
{
    struct Array arr={{12,34,45,98,30},20,5};


    display(arr);

    return 0;
}
