#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, i, j, k, d, c, a;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        a=0;
        for(i=3; i<=n/2; i=i+2)
        {
            d=0;
            k=0;
            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    k=1;
                    break;
                }
            }
            if(k==0||i==3)
            {
                for(c=2; c<=sqrt(n-i); c++)
                {
                    if((n-i)%c==0)
                    {
                        d=1;
                        break;
                    }
                }
            }
            if(d==0&&k==0)
            {
                printf("%lld = %lld + %lld\n",n,i,n-i);
                a=1;
                break;
            }
        }
        if (a==0)
            {
                printf("Goldbach's conjecture is wrong.\n");
            }
    }
    return 0;
}
