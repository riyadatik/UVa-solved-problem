#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
int weight[1000], cost[1000];
int cap=0, n;
int dp[505][50005];
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
    int i, j, t, ans, sum, bag, c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        mem(dp,-1);
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&cost[j]);
            weight[j]=cost[j];
            sum=sum+cost[j];
        }
        cap=sum/2;
        bag=func(1,0);
        ans=sum-2*bag;
        printf("%d\n",ans);
    }
    return 0;
}
