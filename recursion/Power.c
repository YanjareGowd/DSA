/*
#include <stdio.h>
#include <stdlib.h>

int exp(int m,int n)
{
    if(n==0)
        return 1;
    else
        return exp(m,n-1)*m;
}
int main()
{
    int m=2,n=6;
    printf("%d power of %d is : %d",m,n,exp(m,n));
    return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>

int exp(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return exp((m*m),n/2);
        else
            return m*exp((m*m),n/2);
}
int main()
{
    int m=2,n=6;
    printf("%d power of %d is : %d",m,n,exp(m,n));
    return 0;
}
