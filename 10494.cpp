#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, i;
    string s;
    char c;
    while(cin>>s)
    {
        long long int re=0;
        long long int d=0;
        int flag=0;
        long long int h=0;
        cin>>c>>k;
        if(c=='/')
        {
            for(i=0; i<s.size(); i++)
            {
                int digit=s[i]-'0';
                re=((re*10)+digit)/k;
                if(re!=0)
                {
                    flag=1;
                }
                if(flag)
                {
                    cout<<re;
                }
                d=((d*10)+digit)%k;
                re=d;
            }
            if(!flag)
                cout<<0;
        }
        else if(c=='%')
        {
            for(i=0; i<s.size(); i++)
            {
                int j=s[i]-'0';
                h=((h*10)+j)%k;
            }
            cout<<h;
        }
        cout<<endl;
    }
    return 0;
}
