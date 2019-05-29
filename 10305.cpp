#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
int main()
{
    int n, m, i;
    while(scanf("%d%d",&n,&m)==2&&(n!=0||m!=0))
    {
        vector<int>Hritee[105];
        vector<int>Tasnim;
        int indg[105];
        mem(indg,0);
        for(i=1; i<=m; i++)
        {
            int u, v;
            scanf("%d %d",&u,&v);
            Hritee[u].push_back(v);
            indg[v]++;
        }
        queue<int>q;
        for(i=1; i<=n; i++)
        {
            if(indg[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int tx=q.front();
            q.pop();
            Tasnim.push_back(tx);
            for(int i=0; i<Hritee[tx].size(); i++)
            {
                int ty=Hritee[tx][i];
                indg[ty]--;
                if(indg[ty]==0)
                {
                    q.push(ty);
                }
            }
        }
        printf("%d",Tasnim[0]);
        for(i=1; i<Tasnim.size(); i++)
        {
            printf(" %d",Tasnim[i]);
        }
        printf("\n");
    }
    return 0;
}
