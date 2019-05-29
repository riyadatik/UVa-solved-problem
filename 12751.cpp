#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, k, x, c, a, b, f, y, ans, total;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld",&n,&k,&x);
        total=(n*(n+1))/2;
        f=x-1;
        y=x+k-1;
        b=(f*(f+1))/2;
        c=(y*(y+1))/2;
        a=c-b;
        ans=total-a;
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
