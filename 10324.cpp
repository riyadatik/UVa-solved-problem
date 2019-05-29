#include<bits/stdc++.h>
using namespace std;
int main()
{
    string hritee;
    char ch;
    int n, i, j, k, c, d, a, b;
    k=1;
    while(cin>>hritee)
    {
        cout<<"Case "<<k++<<":"<<endl;
        cin>>n;
        for(c=1; c<=n; c++)
        {
            d=0;
            cin>>i>>j;
            a=min(i,j);
            b=max(i,j);
            ch=hritee[a];
            while(a<=b)
            {
                if(hritee[a]!=ch||hritee[b]!=ch)
                {
                    d=1;
                    break;
                }
                a++;
                b--;
            }
            if(d==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
