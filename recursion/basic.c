
/*
#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n
;    }
return 0;
}
int main()
{
    int a=5;
    printf("%d ",fun(a));
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    if(n>0)
    {

        printf("%d ",fun(n-1)*25);
        printf("%d ",n);
;    }
return 0;
}
int main()
{
    int a=5;
    printf("%d ",fun(a));
    return 0;
}
