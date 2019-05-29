#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[4];
    while(scanf("%lld %lld %lld",&a[0],&a[1],&a[2])!=EOF)
    {
        sort(a,a+3);
        if((a[0]*a[0]+a[1]*a[1])==a[2]*a[2])
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
