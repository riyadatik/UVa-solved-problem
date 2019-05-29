#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k, hritee;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        map<int, int>m;
        set<int>s;
        set<int>::iterator it;
        bool flag=true;
        cin>>n;
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
                cin>>hritee;
                m[hritee]++;
                s.insert(hritee);
            }
        }
        cout<<"Case "<<i<<": ";
        for(it=s.begin(); it!=s.end(); it++)
        {
            if(m[*it]>n)
            {
                cout<<"no";
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"yes";
        }
        cout<<endl;
    }
    return 0;
}
