#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int hritee, n, x, s;
    while(scanf("%d",&n)==1&&n!=0)
    {
    x=1;
    while(x<=n)
    {
        x=x*2;
        s=x%n;
    }
    hritee=n-s;
    cout<<hritee<<endl;
    }
    return 0;
}
