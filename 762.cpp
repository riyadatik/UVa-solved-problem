#include<bits/stdc++.h>
using namespace std;
map<string, vector<string> >G;
map<string, string> par;
map <string, int> visited;
int bfs(string src, string dest)
{
    queue<string>q;
    q.push(src);
    visited[src]=1;
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        if(u==dest)
        return visited[u];
        for(int i=0; i<G[u].size(); i++)
        {
            string v=G[u][i];
            if(visited[v]==-1)
            {
                visited[v]=1;
                par[v]=u;
                q.push(v);
            }
        }
    }
  return -1;
}
int main()
{
    int n, i, flag=0;
    while(scanf("%d",&n) != EOF)
    {
        string u, v, src, dest;
        for (i = 0; i < n; ++i)
        {
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
            visited[u]=-1;
            visited[v]=-1;
        }
        cin>>src>>dest;
        if(flag) printf ("\n");
        flag=1;
        par[src]=-1;
        if(bfs(src,dest)!=-1)
        {
            vector<string>path;
            string s;
            s=-1;
            while(dest!=s)
            {
                path.push_back(dest);
                dest=par[dest];
            }
            cout<<path[path.size()-1]<<' ';
            for(i=path.size()-2; i>0; i--)
            {
                cout<<path[i]<<endl<<path[i]<<' ';
            }
            cout<<path[0]<<endl;
        }
        else
            printf("No route\n");

        G.clear();
     }
     return 0;
}
