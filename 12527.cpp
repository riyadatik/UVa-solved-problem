#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int hritee, riyad, i, j, k, c, d, x, y, s;
    int a[5];
    while(scanf("%d%d",&hritee,&riyad)==2)
    {
        y=0;
        for(i=hritee; i<=riyad; i++)
        {
            k=0;
            s=0;
            d=i;
            while(d!=0)
            {
                s=s+1;
                x=d%10;
                a[s]=x;
                d=d/10;
            }
            for(j=1; j<s; j++)
            {
                for(c=j+1; c<=s; c++)
                {
                    if(a[j]==a[c])
                    {
                        k=1;
                        break;
                    }
                }
            }
            if(k==0)
            {
                y=y+1;
            }
        }
        printf("%d\n",y);
    }
    return 0;
}
