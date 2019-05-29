#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n, hritee, riyad, z, i, d;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&hritee,&riyad,&z);
        d=(z*((2*hritee)-riyad))/(hritee+riyad);
        printf("%d\n",d);
    }
    return 0;
}
