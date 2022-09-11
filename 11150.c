#include<stdio.h>
int main()
{
    int n, b;
    while(scanf("%d",&n)==1)
    {
        b=n;
        while(n>=3)
        {
            n=n-3;
            n=n+1;
            b=b+1;
        }
        n=n+1;
        if(n==3)
        {
            b=b+1;
        }
        printf("%d\n",b);
    }
    return 0;
}
