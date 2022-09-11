#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
vector<int>G[400000];
int visited[400000];
int level[400000];
int par[400000];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    level[src]=0;
    par[src]=-1;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                par[v]=u;
                q.push(v);
            }
            else if((level[v]==level[u]+1)&&(par[v]>u))
            {
                par[v]=u;
            }
        }
        q.pop();
    }
}
int main()
{
    int n, m, i, j, k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            string s;
            int u=0, v=0;
            cin>>s;
            for(k=0; k<s.size(); k++)
            {
                if((s[k]-'0')>=0&&(s[k]-'0')<=9)
                {
                    u=(u*10)+(s[k]-'0');
                }
                else
                {
                    break;
                }
            }
            for(j=k+1; j<s.size(); j++)
            {
                if((s[j]-'0')>=0&&(s[j]-'0')<='9')
                {
                    v=(v*10)+(s[j]-'0');
                }
                else
                {
                    G[u].push_back(v);
                    v=0;
                }
            }
            if((s[s.size()-1]-'0')>=0&&(s[s.size()-1]-'0')<=9)
            {
                G[u].push_back(v);
            }
        }
        printf("-----\n");
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            int src, dest;
            scanf("%d %d",&src,&dest);
            bfs(src);
            if(!visited[dest]) printf("connection impossible");
            else
            {
                vector<int>path;
                while(dest!=-1)
                {
                    path.push_back(dest);
                    dest=par[dest];
                }
                for(j=path.size()-1; j>=0; j--)
                {
                    printf("%d",path[j]);
                    if(j>0) printf(" ");
                }
            }
            printf("\n");
            mem(visited,0);
            mem(level,0);
            mem(par,0);
        }
        mem(G,0);
    }
    return 0;
}
