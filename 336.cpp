#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
map<int, int>level;
map<int, int>visited;
int main()
{
    int hritee, i, j, k=1, t, u, v, c;
    while(scanf("%d",&hritee)==1&&hritee!=0)
    {
        set<int>s;
        map <int,vector<int> > G;
        for(j=1; j<=hritee; j++)
        {
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
            s.insert(u);
            s.insert(v);
        }
        int src, TTL;
        while(scanf("%d%d",&src,&TTL)==2&&(src!=0||TTL!=0))
        {
            visited.clear();
            level.clear();
            queue<int>q;
            q.push(src);
            t=0;
            level[src]=0;
            visited[src]=1;
            while(!q.empty())
            {
                 u=q.front();
                 for(i=0; i<G[u].size(); i++)
                 {
                    v=G[u][i];
                    if(!visited[v])
                    {
                        visited[v]=1;
                        level[v]=level[u]+1;
                        q.push(v);
                        if(level[v]>TTL)
                           t++;
                    }
                }
                q.pop();
            }
            set<int>::iterator it;
            for(it=s.begin(); it!=s.end(); it++)
            {
                if(!visited[*it])
                    t++;
            }
            cout<<"Case "<<k<<": "<<t<<" nodes not reachable from node "<<src<<" with TTL = "<<TTL<<"."<<endl;
            k++;
        }
    }
    return 0;
}
