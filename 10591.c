#include<stdio.h>
int main()
{
    long long int n, a, b, c, d, i, k;
    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            d=a;
            while(d!=1)
            {
                k=0;
                b=d;
                while(b!=0)
                {
                    c=b%10;
                    k=k+(c*c);
                    b=b/10;
                }
                d=k;
                if(d<=9||d==1)
                {
                    break;
                }
            }
            if(d==1)
            {
                printf("Case #%lld: %lld is a Happy number.\n",i,a);
            }
            else
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",i,a);
            }
        }
    }
    return 0;
}
