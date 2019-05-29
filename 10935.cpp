#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    int n, u, i;
    while(scanf("%d",&n)==1&&n!=0)
    {
    for(i=1; i<=n; i++)
        q.push(i);
    i=0;
    cout<<"Discarded cards:";
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        i++;
        if(q.empty()){
            cout<<endl;
            cout<<"Remaining card: "<<u<<endl;
        }
        else{
            q.push(q.front());
            q.pop();
            cout<<" "<<u;
            if(i<n-1)
                cout<<",";
        }
    }
    }
    return 0;
}
