#include<stdio.h>
long long int GCD(int, int);
int main()
{
    long long int n, i, j, k;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        k=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                k=k+GCD(i,j);
            }
        }
        printf("%lld\n",k);
    }
    return 0;
}
long long int GCD(int x, int y)
{
    long long int a;
    while(x!=0)
    {
        a=y%x;
        y=x;
        x=a;
    }
    return (y);
}
