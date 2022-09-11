#include<stdio.h>
int main()
{
    int a[200][200];
    int n, i, j, k, c, x, y, e, d;
    while(scanf("%d",&n)==1&&n!=0)
    {
        x=0;
        y=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1; i<=n; i++)
        {
            k=0;
            for(j=1; j<=n; j++)
            {
                k=k+a[i][j];
            }
            if(k%2!=0)
            {
                c=i;
                x=x+1;
            }
        }
        for(j=1; j<=n; j++)
        {
            e=0;
            for(i=1; i<=n; i++)
            {
                e=e+a[i][j];
            }
            if(e%2!=0)
            {
                d=j;
                y=y+1;
            }
        }
        if(x==0&&y==0)
        {
            printf("OK\n");
        }
        else if(x==1&&y==1)
        {
            printf("Change bit (%d,%d)\n",c,d);
        }
        else
        {
            printf("Corrupt\n");
        }
    }
    return 0;
}
