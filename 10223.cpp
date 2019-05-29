#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i;
    long long int c[22];
    c[0]=1;
    for(i=0; i<20; i++)
    {
        c[i+1]=((2*(2*i+1))*c[i])/(i+2);
    }
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=1; i<20; i++)
        {
            if(c[i]==n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
