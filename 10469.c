#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i, j, k, x, y, l;
    int c[100];
    while(scanf("%d%d",&a,&b)==2)
    {
        j=0;
        l=1;
        while(a!=0||b!=0)
        {
            x=a%2;
            y=b%2;
            a=a/2;
            b=b/2;
            k=x+y;
            if(k==1)
            {
                c[l]=1;
            }
            else
            {
                c[l]=0;
            }
            l=l+1;
        }
        l=l-1;
        for(i=1; i<=l; i++)
        {
            j=j+(c[i]*pow(2,(i-1)));
        }
        printf("%d\n",j);
    }
    return 0;
}
