#include<stdio.h>
int main()
{
    int t, n, a, d, i, j, max, min;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            max=0;
            min=100;
            scanf("%d",&n);
            for(j=1; j<=n; j++)
            {
                scanf("%d",&a);
                if(max<a)
                {
                    max=a;
                }
                if(min>a)
                {
                    min=a;
                }
            }
            d=2*(max-min);
            printf("%d\n",d);
        }
    }
    return 0;
}
