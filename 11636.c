#include<stdio.h>
int main()
{
    int n, i, j, c, k, a=0;
    while(scanf("%d",&n)==1&&n>=0)
    {
        a=a+1;
        j=0;
        c=1;
        k=1;
        if(n==1)
        {
            printf("Case %d: 0\n",a);
        }
        else
        {
        while(c<n)
        {
            c=c+k;
            k=c;
            j=j+1;
        }
        printf("Case %d: %d\n",a,j);
        }
    }
    return 0;
}
