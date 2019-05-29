#include<stdio.h>
int main()
{
    long long int t, g, l, i;
    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld%lld",&g,&l);
            if(l%g==0)
            {
                printf("%lld %lld\n",g,l);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
