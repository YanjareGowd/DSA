
#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int main()
{
    int a=5;
    printf("factorial of %d is : %d",a,fact(a));
    return 0;
}
