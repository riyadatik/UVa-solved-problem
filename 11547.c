#include<stdio.h>
int main()
{
    int t, n, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        if(n<0)
        {
            n=n*(-1);
        }
        n=n/10;
        n=n%10;
        printf("%d\n",n);
    }
    return 0;
}
