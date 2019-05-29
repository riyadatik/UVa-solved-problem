#include<stdio.h>
int main()
{
    int n, a, b, c, d, i, j, k, total;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            total=0;
            scanf("%d%d%d",&a,&b,&c);
            d=a+b;
            while(d>=c)
            {
                k=d/c;
                j=d%c;
                d=j+k;
                total=total+k;
            }
            printf("%d\n",total);
        }
    }
    return 0;
}
