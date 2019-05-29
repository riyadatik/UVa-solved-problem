#include<stdio.h>
int a[2000000];
int b[2000000];
int c[2000000];
int main()
{
    long int n, i, j, max;
    while(scanf("%ld",&n)==1&&n!=0)
    {
        max=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=1; i<=max; i++)
    {
    c[i]=0;
    }
    for(j=1; j<=n; j++)
    {
        c[a[j]]=c[a[j]]+1;
    }
    for(i=2; i<=max; i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(j=n; j>=1; j--)
    {
        b[c[a[j]]]=a[j];
        c[a[j]]=c[a[j]]-1;
    }
    for(i=1; i<=n; i++)
    {
        printf("%d",b[i]);
        if(i<n)
        {
        printf(" ");
        }
    }
    printf("\n");
    }
    return 0;
}

