#include<stdio.h>
#include<math.h>
int main()
{
    int n, r, i, j, k, c, x, y, p;
    int a[30050];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        p=50000000;
        scanf("%d",&r);
        for(j=1; j<=r; j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1; j<r; j++)
        {
            for(x=1; x<r; x++)
            {
                if(a[x]>a[x+1])
                {
                    y=a[x];
                    a[x]=a[x+1];
                    a[x+1]=y;
                }
            }
        }
        for(j=1; j<=r-1; j++)
        {
            c=0;
            for(k=1; k<=r; k++)
            {
                c=c+abs(a[j]-a[k]);
            }
            if(p>c)
            {
                p=c;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
