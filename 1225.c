#include<stdio.h>
int main()
{
    long int a, n, remainder, q, d, i, j, k, c, s, f, g, h, l, m, r;
    while(scanf("%ld",&n)==1)
    {
        for(q=1; q<=n; q++)
        {
        c=0;
        j=0;
        k=0;
        s=0;
        f=0;
        g=0;
        h=0;
        l=0;
        m=0;
        r=0;
        scanf("%ld",&d);
        for(i=1; i<=d; i++)
        {
            a=i;
            while(a!=0)
            {
                remainder=a%10;
                if(remainder==0)
                c=c+1;
                else if(remainder==1)
                j=j+1;
                else if(remainder==2)
                k=k+1;
                else if(remainder==3)
                s=s+1;
                else if(remainder==4)
                f=f+1;
                else if(remainder==5)
                g=g+1;
                else if(remainder==6)
                h=h+1;
                else if(remainder==7)
                l=l+1;
                else if(remainder==8)
                m=m+1;
                else if(remainder==9)
                r=r+1;
                a=a/10;
            }
        }
        printf("%ld %ld %ld %ld %ld %ld %ld %ld %ld %ld\n",c,j,k,s,f,g,h,l,m,r);
        }
    }
    return 0;
}
