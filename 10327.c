#include<stdio.h>
int main()
{
    int i, j, n, a[1001], c;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        c=0;
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(a[i]>a[j])
                {
                    c=c+1;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
