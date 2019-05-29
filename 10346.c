#include<stdio.h>
int main()
{
    int n, k, c;
    while(scanf("%d%d",&n,&k)!=EOF&&k>1)
    {
        c=n;
        while(n>=k)
        {
            c=c+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",c);
    }
    return 0;
}
