#include<bits/stdc++.h>
using namespace std;
#define pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define uu first
#define vv second
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int visited[1000+5][1000+5];
int level[1000+5][1000+5];
char G[1000+5][1000+5];
int m, n;
int bfs(int i, int j, int d1, int d2)
{
    queue<pii>q;
    q.push(pii(i,j));
    visited[i][j]=1;
    level[i][j]=0;
    while(!q.empty())
    {
        pii top=q.front();
        int u=top.uu;
        int v=top.vv;
        if(u==d1&&v==d2)
        {
            return level[u][v];
        }
        for(int k=0; k<4; k++)
        {
            int tx=top.uu+fx[k];
            int ty=top.vv+fy[k];
            if(G[tx][ty]!='1'&&tx>=0&&tx<n&&ty>=0&&ty<m&&visited[tx][ty]==0)
            {
                visited[tx][ty]=1;
                level[tx][ty]=level[u][v]+1;
                q.push(pii(tx,ty));
            }
        }
        q.pop();
    }
    return level[d1][d2];
}
int main()
{
    int i, j, c, b, r, totl, ans;
    while(scanf("%d %d",&n,&m)==2&&n!=0&&m!=0)
    {
        int s1, s2, d1, d2;
        scanf("%d",&b);
        for(i=1; i<=b; i++)
        {
            scanf("%d %d",&r,&totl);
            for(j=1; j<=totl; j++)
            {
                scanf("%d",&c);
                G[r][c]='1';
            }
        }
        scanf("%d %d",&s1,&s2);
        scanf("%d %d",&d1,&d2);
        ans=bfs(s1, s2, d1, d2);
        printf("%d\n",ans);
        mem(G,0);
        mem(visited,0);
        mem(level,0);
    }
    return 0;
}
