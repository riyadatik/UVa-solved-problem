#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
int main()
{
    int n, i, j, k, u, v, edge, d, c=1;
    int a[100][100];
    while(scanf("%d%d",&n,&edge)==2&&n!=0)
    {
        int u, v, d;
        string s[100], st;
        for(i=0; i<100; i++)
        {
            for(j=0; j<100; j++)
            {
                a[i][j]=MAX;
                if(i==j)
                {
                    a[i][j]=0;
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            cin>>s[i];
        }
        for(i=0; i<edge; i++)
        {
            int n1, n2, cost;
            cin>>n1>>n2>>cost;
            a[n1][n2]=cost;
            a[n2][n1]=cost;
        }
        for(k=1; k<=n; k++)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                }
            }
        }
        u=MAX;
        for(i=1; i<=n; i++)
        {
            v=0;
            for(j=1; j<=n; j++)
            {
                v=v+a[i][j];
            }
            if(u>v)
            {
                u=v;
                st=s[i];
            }
        }
        cout<<"Case #"<<c<<" : "<<st<<endl;
        c++;
    }
    return 0;
}
