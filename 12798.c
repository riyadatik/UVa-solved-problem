#include<stdio.h>
int main()
{
    int n, m, i, j, k, c;
    int a[105];
    while(scanf("%d%d",&n,&m)==2)
    {
        c=0;
        for(i=1; i<=n; i++)
        {
            k=0;
            for(j=1; j<=m; j++)
            {
                scanf("%d",&a[j]);
                if(a[j]==0)
                {
                    k=1;
                }
            }
            if(k!=1)
            {
                c=c+1;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
