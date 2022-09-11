#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define pii pair<int, int>
#define mem(x,y) memset(x,y,sizeof(x))
map<int, vector<int> >hritee;
map<int, int>visited;
void BFS(int d)
{
    queue<int>q;
    q.push(d);
    visited[d]=1;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<hritee[u].size(); i++)
        {
            int v=hritee[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }
}
int main()
{
    set<int>::iterator it;
    int t, i, j, k, blank=0;
    int d;
    cin>>t;
    while(t--)
    {
        int e=0;
        if(blank)
           cout<<endl;
        blank=1;
        char a;
        string st;
        set<int>s;
        j=0;
        cin>>a;
        d=a;
        cin.ignore();
        while(getline(cin,st))
        {
            if(st.size()==0)
                break;
            hritee[st[0]-'0'].push_back(st[1]-'0');
            hritee[st[1]-'0'].push_back(st[0]-'0');
            s.insert(st[0]-'0');
            s.insert(st[1]-'0');
        }
        for(it=s.begin(); it!=s.end(); it++)
        {
            if(!visited[*it])
            {
              BFS(*it);
              j++;
            }
            e++;
        }
        j=j+((d-65)-e)+1;
        cout<<j<<endl;
        hritee.clear();
        visited.clear();
    }
    return 0;
}
