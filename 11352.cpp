#include<bits/stdc++.h>
using namespace std;
#define pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define uu first
#define vv second
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int dx[]={-1,-2,-2,-1,1,2,2,1};
int dy[]={-2,-1,1,2,2,1,-1,-2};
int visited[105][105], level[105][105];
char G[105][105];
int m, n;
void bfs(int i, int j, int d1, int d2)
{
    //cout<<i<<' '<<j<<endl;
    queue<pii>q;
    q.push(pii(i,j));
    visited[i][j]=1;
    level[i][j]=0;
    while(!q.empty())
    {
        pii top=q.front();
        int u=top.uu;
        int v=top.vv;
        for(int k=0; k<8; k++)
        {
            int tx=top.uu+fx[k];
            int ty=top.vv+fy[k];
            if(G[tx][ty]!='Z'&&tx>=1&&tx<=m&&ty>=1&&ty<=n&&visited[tx][ty]==0)
            {
                visited[tx][ty]=1;
                level[tx][ty]=level[u][v]+1;
                q.push(pii(tx,ty));
            }
        }
        q.pop();
    }
}
int main()
{
    int t, i, j, k, c, flag=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        vector<pii>vc;
        int s1, s2, d1, d2;
        scanf("%d %d",&m,&n);
        for(j=1; j<=m; j++)
        {
            getchar();
            for(k=1; k<=n; k++)
            {
                scanf("%c",&G[j][k]);
                if(G[j][k]=='B')
                {
                    d1=j;
                    d2=k;
                }
                if(G[j][k]=='A')
                {
                    s1=j;
                    s2=k;
                }
                if(G[j][k]=='Z')
                {
                    vc.push_back(pii(j,k));
                }
            }
        }
        for(j=0; j<vc.size(); j++)
        {
            pii tot=vc[j];
            for(c=0; c<8; c++)
            {
                int tt=tot.uu+dx[c];
                int to=tot.vv+dy[c];
                if(tt>=1&&tt<=m&&to>=1&&to<=n&&G[tt][to]=='.')
                {
                    G[tt][to]='Z';
                }
            }
        }
        bfs(s1,s2,d1,d2);
        if(visited[d1][d2]==0)
        {
            printf("King Peter, you can't go now!\n");
        }
        else
        {
            printf("Minimal possible length of a trip is %d\n",level[d1][d2]);
        }
        mem(G,0);
        mem(visited,0);
        mem(level,0);
    }
    return 0;
}
