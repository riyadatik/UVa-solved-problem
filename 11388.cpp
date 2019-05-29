#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, i, gcd, lcm;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&a,&b);
        gcd=__gcd(a,b);
        lcm=(a*b)/gcd;
        if(a==gcd&&b==lcm&&gcd<=lcm)
        {
            printf("%lld %lld\n",gcd,lcm);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
