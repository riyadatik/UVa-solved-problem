#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define pi pair<int ,int>
#define pii pair<int ,pi>
#define uu first
#define vv second
int fx[]={1,-1,0,0,0,0};
int fy[]={0,0,1,-1,0,0};
int fz[]={0,0,0,0,1,-1};
char G[35][35][35];
int visited[35][35][35];
int level[35][35][35];
int l, r, c;
void bfs(int i, int j, int k)
{
    queue<pii>q;
    level[i][j][k]=0;
    visited[i][j][k]=1;
    q.push(pii(i,pi(j,k)));
    while(!q.empty())
    {
        pii top=q.front();
        int d=top.uu;
        pi tt=top.vv;
        int g=tt.uu;
        int h=tt.vv;
        for(int e=0; e<6; e++)
        {
            int tx=top.uu+fx[e];
            pi tp=top.vv;
            int ty=tp.uu+fy[e];
            int tz=tp.vv+fz[e];
            if(G[tx][ty][tz]!='#'&&tx>=1&&tx<=l&&ty>=1&&ty<=r&&tz>=1&&tz<=c&&visited[tx][ty][tz]==0)
            {
                visited[tx][ty][tz]=1;
                level[tx][ty][tz]=level[d][g][h]+1;
                q.push(pii(tx,pi(ty,tz)));
            }
        }
        q.pop();
    }
}
int main()
{
    int i, j, k, ans;
    while(scanf("%d %d %d",&l,&r,&c)==3&&l!=0)
    {
        int s1, s2, s3, d1, d2, d3;
        for(i=1; i<=l; i++)
        {
            for(j=1; j<=r; j++)
            {
                for(k=1; k<=c; k++)
                {
                    cin>>G[i][j][k];
                    if(G[i][j][k]=='S')
                    {
                        s1=i;
                        s2=j;
                        s3=k;
                    }
                    if(G[i][j][k]=='E')
                    {
                        d1=i;
                        d2=j;
                        d3=k;
                    }
                }
            }
        }
        bfs(s1,s2,s3);
        if(!visited[d1][d2][d3])
        {
            printf("Trapped!\n");
        }
        else
        {
            ans=level[d1][d2][d3];
            printf("Escaped in %d minute(s).\n",ans);
        }
        mem(G,0);
        mem(visited,0);
        mem(level,0);
    }
    return 0;
}
