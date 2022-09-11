#include<stdio.h>
int main()
{
    long long int n, a, c, i , j, reverse;
    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            j=0;
            reverse=0;
            scanf("%lld",&a);
            while(1)
            {
                c=a;
                reverse=0;
                while(a!=0)
                {
                    reverse=reverse*10;
                    reverse=reverse+a%10;
                    a=a/10;
                }
                if(c==reverse)
                {
                    break;
                }
                else
                {
                    a=c+reverse;
                    j=j+1;
                }
            }
            printf("%lld %lld\n",j,reverse);
        }
    }
    return 0;
}
