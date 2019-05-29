#include<bits/stdc++.h>
using namespace std;
#define pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define u first
#define v second
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int visited[1001][1001];
int h, w;
char G[1001][1001];
void bfs(int i, int j)
{
    //cout<<1<<endl;
    //char ch1=G[i][j]
    queue<pii>q;
    q.push(pii(i,j));
    visited[i][j]=1;
    while(!q.empty())
    {
        pii top=q.front();
        for(int hritee=0; hritee<4; hritee++)
        {
            int tx=top.u+fx[hritee];
            int ty=top.v+fy[hritee];
            if(!visited[tx][ty]&&tx>=0&&tx<h&&ty>=0&&ty<w&&G[tx][ty]==G[i][j])
            {
                visited[tx][ty]=1;
                q.push(pii(tx,ty));
            }
            //cout<<hritee<<endl;
        }
        //cout<<1<<endl;
        q.pop();
    }
}
int main()
{
    int n, i, j, k, c, x, y, d;
    char ch;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int cnt[27];
        char a[27];
        set<char>s;
        set<char>::iterator it;
        map<char,int>m;
        mem(G,0);
        mem(visited,0);
        cin>>h>>w;
        for(j=0; j<h; j++)
        {
            for(k=0; k<w; k++)
            {
                cin>>G[j][k];
                s.insert(G[j][k]);
            }
        }
        for(j=0; j<h; j++)
        {
            for(k=0; k<w; k++)
            {
                if(!visited[j][k])
                {
                    bfs(j,k);
                    m[G[j][k]]++;
                    //cout<<G[j][k]<<' '<<j<<' '<<m[G[j][k]]<<endl;
                }
            }
        }
        c=0;
        for(it=s.begin(); it!=s.end(); it++)
        {
            cnt[c]=m[*it];
            a[c]=*it;
            //cout<<cnt[c]<<' '<<a[c]<<endl;
            c++;
        }
        for(x=0; x<c-1; x++)
        {
            for(y=0; y<c-1; y++)
            {
                if(cnt[y]>cnt[y+1])
                {
                    d=cnt[y];
                    cnt[y]=cnt[y+1];
                    cnt[y+1]=d;
                    ch=a[y];
                    a[y]=a[y+1];
                    a[y+1]=ch;
                }
                else if(cnt[y]==cnt[y+1]&&a[y]<a[y+1])
                {
                    d=cnt[y];
                    cnt[y]=cnt[y+1];
                    cnt[y+1]=d;
                    ch=a[y];
                    a[y]=a[y+1];
                    a[y+1]=ch;
                }
            }
        }
        cout<<"World #"<<i<<endl;
        for(j=c-1; j>=0; j--)
        {
            cout<<a[j];
            cout<<':';
            cout<<' ';
            cout<<cnt[j];
            cout<<endl;
        }
    }
    return 0;
}
