#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int n, rev, a, i, k;
    while(scanf("%lld",&n)==1)
    {
        k=0;
        a=n;
        rev=0;
        if(n==1)
        {
            cout<<2<<endl;
            break;
        }
          cout<<n*2<<endl;
        while(a!=0)
        {
            rev=rev*10;
            rev=rev+a%10;
            a=a/10;
        }
        if(rev==n)
        {
            for(i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
                break;
        }
    }
    return 0;
}
