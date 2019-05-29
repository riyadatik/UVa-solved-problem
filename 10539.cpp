#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int a[MAX];
void seive();
int main()
{
    long long int t, n, m, i, j, k, ans, x;
    scanf("%lld",&t);
    seive();
    for(k=1; k<=t; k++)
    {
        scanf("%lld%lld",&n,&m);
        vector<int>v;
        for(i=2; i<=sqrt(m); i++)
        {
            if(a[i]==0)
            {
                j=2;
                x=i;
                ans=pow(x,j);
                while(ans<=m)
                {
                    if(ans>=n&&ans<=m)
                    {
                        v.push_back(ans);
                    }
                    j++;
                    ans=pow(x,j);
                }
            }
        }
        printf("%d\n",v.size());
    }
    return 0;
}
void seive()
{
    long long int j, k;
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
