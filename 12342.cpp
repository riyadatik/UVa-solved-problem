#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double n, k;
    int t, i, j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        k=0;
        cin>>n;
        cout<<"Case "<<i<<": ";
        if(n<=180000)
            cout<<0<<endl;
        else
        {
            n=n-180000;
            if(n<=300000&&n>0)
            {
                k=n*(10/100.0);
                n=n-n;
            }
            else
            {
                n=n-300000;
                k=300000*(10/100.0);
            }
            if(n<=400000&&n>0)
            {
                k=k+(n*(15/100.0));
                n=n-n;
            }
            else if(n>400000)
            {
                n=n-400000;
                k=k+(400000*(15/100.0));
            }
            if(n<=300000&&n>0)
            {
                k=k+(n*(20/100.0));
                n=n-n;
            }
            else if(n>300000)
            {
                n=n-300000;
                k=k+(300000*(20/100.0));
            }
            if(n>0)
            {
                k=k+(n*(25/100.0));
            }
            if(k<2000)
            {
                cout<<2000;
            }
            else
            {
                j=k;
                if(j!=k)
                {
                    j=j+1;
                }
                cout<<j;
            }
            cout<<endl;
        }
    }
    return 0;
}
