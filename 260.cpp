#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
#define pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define u first
#define v second
int fx[]={-1,-1,0,0,1,1};
int fy[]={-1,0,-1,1,0,1};
int visited[999][999];
char G[999][999];
void bfs(int row, int column, int n)
{
    queue<pii>q;
    q.push(pii(row,column));
    visited[row][column]=1;
    while(!q.empty())
    {
        pii top=q.front();
        for(int k=0; k<6; k++)
        {
            int tx=top.u+fx[k];
            int ty=top.v+fy[k];
            if(tx>=0&&tx<n&&ty<n&&visited[tx][ty]==0&&G[tx][ty]=='b')
            {
                visited[tx][ty]=1;
                q.push(pii(tx,ty));
            }
        }
        q.pop();
    }
}
int main()
{
    int n, i, j, flag, c=1;
    while(scanf("%d",&n)==1&&n!=0)
    {
        mem(visited,0);
        flag=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>G[i][j];
            }
        }
        for(i=0; i<n; i++)
        {
            if(G[0][i]=='b')
            {
                bfs(0, i, n);
            }
            for(j=0; j<n; j++)
            {
                if(visited[n-1][j]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        cout<<c<<' ';
        if(flag==1)
        {
            cout<<'B';
        }
        else
        {
            cout<<'W';
        }
        cout<<endl;
        c++;
    }
    return 0;
}
