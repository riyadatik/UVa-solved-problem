#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, b, c, i, j, k;
    long long int a[100000];
    while(scanf("%lld",&n)==1&&n!=0)
    {
        b=0;
        c=1;
        for(i=2; i<n; i++)
        {
            k=0;
            if(i<3)
            {
                a[c]=i;
                c=c+1;
            }
            else
            {
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    k=1;
                    break;
                }
            }
            if (k==0)
            {
                a[c]=i;
                c=c+1;
            }
            }
        }
        for(i=1; i<c; i++)
        {
            for(j=i; j<=c; j++)
            {
                if((a[i]+a[j])==n)
                {
                    b=b+1;
                }
            }
        }
        printf("%lld\n",b);
    }
    return 0;
}
