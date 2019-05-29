#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define mx
int weight[1000], cost[1000];
int cap=0, n;
int dp[1001][31];
int func(int i, int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int res=0;
    if(w+weight[i]<=cap)
        res=max(res,(func(i+1, w+weight[i])+cost[i]));

    res=max(res,func(i+1, w));
    dp[i][w]=res;
    return dp[i][w];
}
int main()
{
    int i, j, t, g, c, ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        ans=0;
        mem(dp,-1);
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d %d",&cost[j],&weight[j]);
        }
        scanf("%d",&g);
        for(j=1; j<=g; j++)
        {
            scanf("%d",&cap);
            mem(dp,-1);
            ans=ans+func(1,0);
        }
        printf("%d\n",ans);
    }
    return 0;
}
