#include<bits/stdc++.h>
using namespace std;
int a[20000005];
int b[1000000], c[1000000];
void sieve(int n)
{
    int i, j;
    for(i=4; i<=n; i=i+2)
    {
        a[i]=1;
    }
    for(i=3; i<=sqrt(n); i=i+2)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=n; j=j+i+i)
            {
                a[j]=1;
            }
        }
    }
}
int main()
{
    int i, j=1, s;
    sieve(20000002);
    for(i=3; i<=20000000; i=i+2)
    {
        if(a[i]==0&&a[i+2]==0)
        {
            b[j]=i;
            c[j]=i+2;
            j++;
        }
    }
    while(scanf("%d",&s)!=EOF)
    {
        printf("(%d, %d)\n",b[s],c[s]);
    }
    return 0;
}
