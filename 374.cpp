#include<bits/stdc++.h>
#define i64 long long
using namespace std;
i64 F(i64 N, i64 P, i64 M)
{
    if(P==0)
        return 1;
    if(P%2==0)
    {
        i64 ret=F(N,P/2,M);
        return ((ret%M)*(ret%M))%M;
    }
    else
    {
        return ((N%M)*(F(N,P-1,M)%M))%M;
    }
}
int main()
{
    i64 b, p, m, i, k;
    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
    {
        k=F(b,p,m);
        cout<<k<<endl;
    }
    return 0;
}
