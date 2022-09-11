#include<bits/stdc++.h>
#define MAX 65001
using namespace std;
int a[MAX], flag;
void seive()
{
    int i, j, k;
    for(i=4; i<=MAX; i=i+2)
    {
        a[i]=1;
    }
    for(j=3; j<=sqrt(MAX); j=j+2)
    {
        if(a[j]==0)
        {
            for(k=j*j; k<=MAX; k=k+j)
            {
                a[k]=1;
            }
        }
    }
}
long long int comarcial(long long int i, long long int p, long long int m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        long long int ret=comarcial(i,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
    {
        return ((i%m)*(comarcial(i,p-1,m)%m))%m;
    }
}
int main()
{
    long long int n, i, j, k, m;
    seive();
    while(scanf("%lld",&n)==1&&n!=0)
    {
        m=n;
        flag=0;
        if(a[n]==0)
        {
            printf("%lld is normal.\n",n);
        }
        else
        {
            for(i=2; i<n; i++)
            {
                k=comarcial(i,n,m);
                if(k!=i)
                    flag=1;
                if(flag==1)
                    break;
            }
            if(flag==0)
            {
                printf("The number %lld is a Carmichael number.\n",n);
            }
            else
            {
                printf("%lld is normal.\n",n);
            }
        }
    }
    return 0;
}
