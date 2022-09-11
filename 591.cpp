#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n, i, j, k, c, d;
    int a[110];
    j=0;
    while(scanf("%d",&n)==1&n!=0)
    {
        j=j+1;
        k=0;
        c=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            k=k+a[i];
        }
        sort(a, a+i);
        k=k/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>k)
            {
            d=a[i];
            while(d!=k)
            {
                d=d-1;
                c=c+1;
            }
            }
        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",c);
    }
    return 0;
}
