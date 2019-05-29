#include<stdio.h>
int main()
{
    int t, n, m, i, a;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d%d",&n,&m);
            a=(n/3)*(m/3);
            printf("%d\n",a);
        }
    }
    return 0;
}
