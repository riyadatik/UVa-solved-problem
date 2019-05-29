#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;
int main()
{
    string s;
    map<char, char>a;
    int i, j, k, l, n, c;
    cin>>n;
    cin.ignore();
    cin.ignore();
    for(i=1; i<=n; i++)
    {
        string s;
        map<char, char>a;
        if(i>1)
            cout<<endl;
        printf("Case #%d:\n",i);
        while(getline(cin,s))
        {
            j=0;
            k=0;
            if(s.size()==0)
                break;
            l=s.size();
            for(c=0; c<l; c++)
            {
                if(s[c]!=' '&&c!=l-1)
                {
                    a[j]=s[c];
                    j++;
                }
                else
                {
                    if(c==l-1)
                        a[j]=s[i];
                    j=0;
                    if(a.size()>=k+1)
                    {
                        cout<<a[k];
                        k++;
                        a.clear();
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
