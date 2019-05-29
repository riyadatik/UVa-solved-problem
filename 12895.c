#include<stdio.h>
#include<math.h>
int main()
{
    long long int t, n, i, j, k, c, d, sum;
    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            sum=0;
            c=0;
            scanf("%lld",&n);
            k=n;
            d=n;
            while(k!=0)
            {
                k=k/10;
                c=c+1;
            }
            while(n!=0)
            {
                j=n%10;
                sum=sum+pow(j,c);
                n=n/10;
            }
            if(d==sum)
            printf("Armstrong\n");
            else
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
