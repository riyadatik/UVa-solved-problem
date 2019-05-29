#include<stdio.h>
int main()
{
    long long int t, f, a, b, c, d, i, j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        d=0;
        scanf("%lld",&f);
        for(j=1; j<=f; j++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            d=d+(a*c);
        }
        printf("%lld\n",d);
    }
    return 0;
}
