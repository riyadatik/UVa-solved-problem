#include<stdio.h>
int main()
{
    long long int n, k;
    while(scanf("%lld",&n)!=EOF)
    {
        k=(n*n*(n+1)*(n+1))/4;
        printf("%lld\n",k);
    }
    return 0;
}
