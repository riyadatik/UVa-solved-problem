#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, a, i, j, k, c, r;
    while(scanf("%lld",&n)==1)
    {
        c=0;
        k=0;
        r=0;
        a=n;
        while(a!=0)
        {
            r=r*10;
            r=r+a%10;
            a=a/10;
        }
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
               k=1;
               break;
            }
        }
        if (k==1)
        {
            printf("%lld is not prime.\n",n);
        }
        else
        {
            for(j=2; j<=sqrt(r); j++)
            {
                if(r%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0&&n!=r)
            {
                printf("%lld is emirp.\n",n);
            }
            else
            {
                printf("%lld is prime.\n",n);
            }
        }
    }
    return 0;
}

