#include<stdio.h>
#include<math.h>
#define MAX 10000005
int a[MAX];
void seive();
int main()
{
    long long int n, i, x, d;
    seive();
    while(scanf("%lld",&n)==1&&n!=0)
    {
        d=0;
        if(n<8)
        {
            printf("Impossible.\n");
            d=1;
        }
        else if(n==8)
        {
            printf("2 2 2 2\n");
            d=1;
        }
        else if(n==9)
        {
            printf("2 2 2 3\n");
            d=1;
        }
        else
        {
        if(n%2==0)
        {
            printf("2 2");
            x=n-(2+2);
        }
        else
        {
            printf("2 3");
            x=n-(2+3);
        }
        for(i=3; i<x; i=i+2)
        {
            if(a[i]==0&&a[x-i]==0)
            {
                printf(" %lld %lld\n",i,x-i);
                d=1;
                break;
            }
        }
        }
        if(d==0)
        {
            printf("Impossible.\n");
        }
    }
    return 0;
}
void seive()
{
    long long int j, k;
    for(j=1; j<MAX; j++)
    {
        a[j]==0;
    }
    for(j=4; j<=MAX; j=j+2)
    {
        a[j]=1;
    }
    for(j=3; j<=sqrt(MAX); j=j+2)
    {
        if(a[j]==0)
        {
            for(k=j*j; k<=MAX; k=k+j+j)
            {
                a[k]=1;
            }
        }
    }
    a[1]=1;
}
