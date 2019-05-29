#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int h, j, k;
    string a, b, c;
    a="too high";
    b="too low";
    c="right on";
    k=11;
    j=0;
    while(scanf("%d",&h)==1&&h!=0)
    {
        cin.ignore();
        string s;
        getline(cin,s);
        if(s==a)
        {
            if(k>h)
                k=h;
        }
        else if(s==b)
        {
            if(j<h)
            {
                j=h;
            }
        }
        else if(s==c)
        {
            if(j<h&&k>h)
            {
                cout<<"Stan may be honest"<<endl;
            }
            else
            {
                cout<<"Stan is dishonest"<<endl;
            }
            k=11;
            j=0;
        }
    }
    return 0;
}
