#include<stdio.h>
int main()
{
    long long int n, a;
    while(scanf("%lld",&n)==1&&n>=0)
    {
        a=1+((n*(n+1))/2);
        printf("%lld\n",a);
    }
    return 0;
}
