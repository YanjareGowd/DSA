
#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int main()
{
    int a=5;
    printf("sum of %d natural number : %d",a,sum(a));
    return 0;
}
