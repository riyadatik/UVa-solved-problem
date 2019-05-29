#include<stdio.h>
int main()
{
    int n, i, j, a[1001], k, s, c, b;
    float d;
    char f='%';
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            s=0;
            c=0;
            scanf("%d",&a[1]);
            k=a[1]+1;
            for(j=2; j<=k; j++)
            {
                scanf("%d",&a[j]);
            }
            for(j=2; j<=k; j++)
            {
                s=s+a[j];
            }
            b=s/a[1];
            for(j=2; j<=k; j++)
            {
                if(a[j]>b)
                    c=c+1;
            }
            d=100.0/a[1];
            d=d*c;
            printf("%.3f%c\n",d,f);
        }
    }
    return 0;
}
