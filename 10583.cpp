#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define pair pii<long long int ,long long int>
#define uu first
#define vv second
vector<int>G[50005];
int visited[50005];                                                             ;
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }
}
int main()
{
    int n, m, i, j, ans, cnt;
    int a[50005];
    i=1;
    while(scanf("%d%d",&n,&m)==2&&n!=0&&m!=0)
    {
        ans=0;
        cnt=0;
        mem(visited,0);
        mem(a,0);
        mem(G,0);
        for(j=1; j<=m; j++)
        {
            int u, v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
            if(a[u]==0&&a[v]==0)
            {
                a[u]=1;
                a[v]=1;
                if(u==v)
                {
                    cnt++;
                }
                else
                {
                    cnt=cnt+2;
                }
            }
            else if(a[u]==0||a[v]==0)
            {
                a[u]=1;
                a[v]=1;
                cnt++;
            }
        }
        for(j=1; j<=n; j++)
        {
            if(visited[j]==0)
            {
                bfs(j);
                ans++;
            }
        }
        printf("Case %d: %d\n",i,ans);
        i++;
    }
    return 0;
}
