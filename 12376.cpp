#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define pii pair<long long int, long long int>
#define sc scanf
#define pf printf
#define pb push_back
#define uu first
#define vv second
#define DIST(x1,y1,x2,y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
vector<int>G[1005];
int cost[105][105], a[105];
int ans, mx, res;
int main()
{
    int t, n, m, i, j, k;
    sc("%d",&t);
    for(i=1; i<=t; i++)
    {
        sc("%d %d",&n,&m);
        for(j=0; j<n; j++)
        {
            sc("%d",&a[j]);
        }
        for(j=1; j<=m; j++)
        {
            int u, v;
            sc("%d %d",&u,&v);
            G[u].pb(v);
            cost[u][v]=a[v];
        }
        int sum=0;
        ans=0;
        while(G[ans].size()!=0)
        {
            int mx=0,k=0;
            for(int j=0;j<G[ans].size();j++)
            {
                int v=G[ans][j];
                if(cost[ans][v] > mx)
                {
                    k=v;
                    mx=cost[ans][v];
                }
            }
            sum+=mx;
            ans=k;
        }
        pf("Case %d: %d %d\n",i,sum,ans);
        mem(G,0);
        mem(cost,0);
        mem(a,0);
    }
    return 0;
}
