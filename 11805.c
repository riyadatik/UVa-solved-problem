#include<stdio.h>
int main()
{
    int t, n, k, p, i, j, c, po;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d", &n, &k, &p);
        po=k;
        for(j=1; j<=p; j++)
        {
            k++;
            if(po==n)
            {
                k=1;
            }
            po=k;
        }

        printf("Case %d: %d\n",i,po);
    }

    return 0;
}
