#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int hritee, i, j;
    int a[77];
    a[1]=1;
    a[2]=2;
    a[3]=2;
    for(i=4; i<=76; i++)
        a[i]=a[i-2]+a[i-3];
    while(scanf("%d",&hritee)!=EOF)
    {
        printf("%d\n",a[hritee]);
    }
    return 0;
}
