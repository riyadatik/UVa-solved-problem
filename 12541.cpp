#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    string name;
    int d, m, y;
    string hritee, hritee_vaabkumari;
    int n, i, x, k, z, a, b, c;
    cin>>n;
    cin.ignore();
    for(i=0; i<n; i++)
    {
        cin>>name;
        cin>>d>>m>>y;
        if(i==0){
            a=y;
            b=m;
            c=d;
            z=y;
            k=m;
            x=d;
            hritee=name;
            hritee_vaabkumari=name;
        }
        if(a==y)
        {
            if(b==m)
            {
                if(c>d)
                {
                    a=y;
                    b=m;
                    c=d;
                    hritee_vaabkumari=name;
                }
            }
            else if(b>m)
            {
                    a=y;
                    b=m;
                    c=d;
                    hritee_vaabkumari=name;
            }
        }
        else if(a>y)
        {
            a=y;
            b=m;
            c=d;
            hritee_vaabkumari=name;
        }
        if(z==y)
        {
            if(k==m)
            {
                if(x<d)
                {
                    z=y;
                    k=m;
                    x=d;
                    hritee=name;
                }
            }
            else if(k<d)
            {
                z=y;
                k=m;
                x=d;
                hritee=name;
            }
        }
        else if(z<y)
        {
            z=y;
            k=m;
            x=d;
            hritee=name;
        }
    }
    cout<<hritee<<endl;
    cout<<hritee_vaabkumari<<endl;
    return 0;
}
