#include<stdio.h>
int main()
{
    int a[5], i, j, k, t, c;
    scanf("%d",&t);
        for(i=1; i<=t; i++)
        {
            for(j=1; j<=3; j++)
            {
                scanf("%d",&a[j]);
            }
        for(j=1; j<=3; j++)
        {
            for(k=1; k<=3; k++)
            {
                if(a[k]>a[k+1])
                {
                    c=a[k];
                    a[k]=a[k+1];
                    a[k+1]=c;
                }
            }
        }
        printf("Case %d: %d\n",i,a[2]);
        }

    return 0;
}
