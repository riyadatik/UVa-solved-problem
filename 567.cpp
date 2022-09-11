#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<set>
#include<queue>
using namespace std;
map<int,vector<int> >hritee;
queue<int>q;
map<int, int>visited;
map<int, int>level;
void BFS(int src, int destin)
{
    visited[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<hritee[u].size(); i++)
        {
            int v=hritee[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
}
int main()
{
    int n, i, j, k=1, l, u;
    while(scanf("%d",&l)!=EOF)
    {
    for(i=1; i<=19; i++)
    {
        for(j=1; j<=l; j++)
        {
            cin>>u;
            hritee[i].push_back(u);
            hritee[u].push_back(i);
        }
        if(i<19)
          cin>>l;
    }
    cin>>n;
    cout<<"Test Set #"<<k<<endl;
    for(i=1; i<=n; i++)
    {
        int src, destin;
        cin>>src>>destin;
        visited.clear();
        level.clear();
        q.push(src);
        BFS(src, destin);
        printf("%2d to %2d: %d\n", src, destin, level[destin]);
    }
    cout<<endl;
    k++;
    hritee.clear();
    }
    return 0;
}
