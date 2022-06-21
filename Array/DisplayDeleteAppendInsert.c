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
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->a[arr->length++]=x;
    }
}
void Insert(struct Array *arr,int x,int index)
{
    if(index>=0 && index <= arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->a[i]=arr->a[i-1];
        }
       arr->a[index]=x;
       arr->length++;
    }

}
void Delete(struct Array *arr,int index)
{
    if(index >= 0 && index <= arr->length)
    {
        int x;
        x=arr->a[index];
        printf("Deleted element at index %d is %d\n ",index,x);
        for(int i= index;i<length-1;i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;

    }
}
int main()
{
    struct Array arr={{12,34,45,98,30},10,5};

    Delete(&arr,2);
   // Append(&arr,10);
  // Insert(&arr,10,0);
    display(arr);

    return 0;
}
