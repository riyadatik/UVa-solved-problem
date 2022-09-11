#include<stdio.h>
int main()
{
    int n, r, x, y, a, b, i, l, w;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&r);
            l=(r*100)/20;
            w=(l*60)/100;
            x=(l*55)/100;
            a=x-l;
            y=w/2;
            b=y-w;
            printf("Case %d:\n",i);
            printf("%d %d\n",a,y);
            printf("%d %d\n",x,y);
            printf("%d %d\n",x,b);
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}
