#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, i, j, k, c, d, a;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        c=0;
        k=0;
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
        else
        {
            d=pow(2,n)-1;
            for(j=2; j<=sqrt(d); j++)
            {
                if(d%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                a=pow(2,(n-1))*(pow(2,n)-1);
                printf("Perfect: %lld!\n",a);
            }
            else
            {
                printf("Given number is prime. But, NO perfect number is available.\n");
            }
        }
    }
    return 0;
}
