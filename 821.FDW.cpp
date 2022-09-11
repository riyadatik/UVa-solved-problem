#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
int main()
{
    int n, i, j, k, u, v, d, c=1;
    set<int>s;
    set<int>::iterator it;
    double avg;
    while(scanf("%d%d",&u,&v)==2&&(u!=0&&v!=0))
    {
        int a[150][150], b[150];
        for(i=0; i<150; i++)
        {
            for(j=0; j<150; j++)
            {
                a[i][j]=MAX;
                if(i==j)
                {
                    a[i][j]=0;
                }
            }
        }
        a[u][v]=1;
        s.insert(u);
        s.insert(v);
        while(scanf("%d%d",&u,&v)==2&&(u!=0&&v!=0))
        {
            a[u][v]=1;
            s.insert(u);
            s.insert(v);
        }
        n=s.size();
        i=1;
        for(it=s.begin(); it!=s.end(); it++)
        {
            b[i]=*it;
            i++;
        }
        for(k=1; k<=n; k++)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    a[b[i]][b[j]]=min(a[b[i]][b[j]],a[b[i]][b[k]]+a[b[k]][b[j]]);
                }
            }
        }
        d=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[b[i]][b[j]]<MAX)
                {
                    d=d+a[b[i]][b[j]];
                }
            }
        }
        n=n*(n-1);
        avg=double(d)/n;
        printf("Case %d: average length between pages = %.3lf clicks\n",c,avg);
        c++;
        s.clear();
    }
    return 0;
}
