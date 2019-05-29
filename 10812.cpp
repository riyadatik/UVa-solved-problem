#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n, c, d, a, b, i;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld",&c,&d);
        if((d>c)||(c-d)%2==1)
        printf("impossible\n");
        else
        {
            a=(c+d)/2;
            b=c-a;
            printf("%lld %lld\n",a,b);
        }
    }
    return 0;
}
