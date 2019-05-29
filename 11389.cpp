#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, r, i, k, a[101],b[101], cost, t;
    while(scanf("%d%d%d",&n,&d,&r)==3&&(n!=0||d!=0||r!=0))
    {
        t=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(i=0; i<n; i++)
        {
            k=a[i]+b[i];
            if(k>d)
            {
                t=t+(k-d);
            }
        }
        cost=t*r;
        cout<<cost<<endl;
    }
    return 0;
}
