#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair < ll , ll > pll;
#define pii pair<int, int>
#define piii pair<pii, pii>
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define pb push_back
#define pu push
#define uu first
#define vv second
#define DIST(x1,y1,x2,y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define pi acos(-1)
#define ull unsigned long long int
map<string, vector<string> > G;
map<string, int>visit;
int mx;
void bfs(string src)
{
    queue<string>q;
    q.pu(src);
    int tot=1;
    visit[src]=1;
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            string v=G[u][i];
            if(visit[v]==0)
            {
                visit[v]=1;
                tot++;
                q.pu(v);
            }
        }
    }
    mx=max(mx, tot);
}
int main()
{
    int C, R, i;
    while(cin>>C>>R)
    {
        if(C==0&&R==0) break;
        set<string>st;
        set<string>::iterator it;
        mx=0;
        for(i=1; i<=C; i++)
        {
            string s;
            cin>>s;
            st.insert(s);

        }
        for(i=1; i<=R; i++)
        {
            string u, v;
            cin>>u>>v;
            G[u].pb(v);
            G[v].pb(u);
        }
        for(it=st.begin(); it!=st.end(); it++)
        {
            if(visit[*it]==0)
            {
                bfs(*it);
            }
        }
        printf("%d\n",mx);
        G.clear();
        visit.clear();
    }
    return 0;
}
