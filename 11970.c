#include<stdio.h>
#include<math.h>
int main()
{
    long long int t, n, i, j, a;
    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld",&n);
            printf("Case %lld:",i);
            for(j=sqrt(n); j>=1; j--)
            {
                a=n-(j*j);
                if(a%j==0&&a>0)
                {
                    printf(" %lld",a);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
