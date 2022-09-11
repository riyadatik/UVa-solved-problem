#include<stdio.h>
int main()
{
    int n, q, i, j, k=0, c, d;
    int a[10050], b[10050];
    while(scanf("%d%d",&n,&q)==2&&(n!=0||q!=0))
    {
        k=k+1;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=1; j<=q; j++)
        {
            scanf("%d",&b[j]);
        }
        for(i=1; i<=n-1; i++)
        {
            for(j=1; j<=n-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    c=a[j];
                    a[j]=a[j+1];
                    a[j+1]=c;
                }
            }
        }
        printf("CASE# %d:\n",k);
        for(j=1; j<=q; j++)
        {
            d=0;
            for(i=1; i<=n; i++)
            {
                if(b[j]==a[i])
                {
                    printf("%d found at %d\n",b[j],i);
                    d=d+1;
                    break;
                }
            }
            if(d==0)
            {
                printf("%d not found\n",b[j]);
            }
        }
    }
    return 0;
}
