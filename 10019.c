#include<stdio.h>
int main()
{
    int n, m, a, b, i, j, k, c, d, x, y;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=0;
        d=0;
        b=0;
        j=1;
        scanf("%d",&m);
        a=m;
        while(a!=0)
        {
            x=a%2;
            a=a/2;
            if(x==1)
            {
                c=c+1;
            }
        }
        while(m!=0)
        {
            y=m%10;
            m=m/10;
            b=b+(y*pow(16,(j-1)));
            j=j+1;
        }
        while(b!=0)
        {
            k=b%2;
            b=b/2;
            if(k==1)
            {
                d=d+1;
            }
        }
        printf("%d %d\n",c,d);
    }
    return 0;
}
