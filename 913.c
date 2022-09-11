#include<stdio.h>
int main()
{
    long long int n, k, c;
    while(scanf("%lld",&n)==1)
    {
        k=(n*(n+2))/2;
        c=k+(k-2)+(k-4);
        printf("%lld\n",c);
    }
    return 0;
}
