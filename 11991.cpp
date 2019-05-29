#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
using namespace std;
map<int, vector<int> >tasnim;
int main()
{
    int n, m, i, k, v;
    int hritee[100001];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            cin>>hritee[i];
            tasnim[hritee[i]].push_back(i+1);
        }
        for(i=0; i<m; i++)
        {
            cin>>k>>v;
            if(tasnim[v].size()<k)
            {
                cout<<0<<endl;;
            }
            else
            {
                cout<<tasnim[v][k-1]<<endl;;
            }
        }
        tasnim.clear();
    }
    return 0;
}
