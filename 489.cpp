#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k, c;
    while(scanf("%d",&n)==1&&n!=-1)
    {
        k=0;
        c=0;
        set<char>sabiha;
        map<char, char>tasnim;
        string hritee;
        string st;
        cin>>hritee;
        cin>>st;
        for(i=0; i<hritee.size(); i++)
        {
            sabiha.insert(hritee[i]);
            tasnim[hritee[i]]++;
        }
        for(i=0; i<st.size(); i++)
        {
            if(tasnim[st[i]]>0)
            {
                c++;
                tasnim.erase(st[i]);
                if(c==sabiha.size())
                    break;
            }
            else
            {
                k++;
            }
        }
        cout <<"Round "<<n<<endl;
        if(k>=7)
        {
            cout <<"You lose."<<endl;
        }
        else if(c==sabiha.size())
        {
            cout <<"You win."<<endl;
        }
        else
        {
            cout <<"You chickened out."<<endl;
        }
    }
    return 0;
}
