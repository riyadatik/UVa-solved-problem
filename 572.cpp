#include<bits/stdc++.h>
using namespace std;
#define pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define uu first
#define vv second
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int visited[105][105];
char G[105][105];
int m, n;
void bfs(int i, int j)
{
    queue<pii>q;
    visited[i][j]=1;
    q.push(pii(i,j));
    while(!q.empty())
    {
        pii top=q.front();
        for(int k=0; k<8; k++)
        {
            int tx=top.uu+fx[k];
            int ty=top.vv+fy[k];
            if(!visited[tx][ty]&&tx>=1&&tx<=m&&ty>=1&&ty<=n&&G[tx][ty]=='@')
            {
                visited[tx][ty]=1;
                q.push(pii(tx,ty));
            }
        }
        q.pop();
    }
}
int main()
{
    int i, j, k, ans;
    while(scanf("%d %d",&m,&n)==2&&m!=0)
    {
        vector<pii>v;
        ans=0;
        for(i=1; i<=m; i++)
        {
            getchar();
            for(j=1; j<=n; j++)
            {
                scanf("%c",&G[i][j]);
                if(G[i][j]=='@')
                {
                    v.push_back(pii(i,j));
                }
            }
        }
        for(i=0; i<v.size(); i++)
        {
            int tx=v[i].uu;
            int ty=v[i].vv;
            if(!visited[tx][ty])
            {
                bfs(tx,ty);
                ans++;
            }
        }
        printf("%d\n",ans);
        mem(G,0);
        mem(visited,0);
    }
    return 0;
}
