#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    double d, v, u, t1, t2, t, w;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf%lf%lf", &d, &v, &u);
        if((v>=u)||(v<=0)||(u<=0)||(d<=0))
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        {
            w=sqrt((u*u)-(v*v));
            t1=d/w;
            t2=d/u;
            t=t1-t2;
            printf("Case %d: %.3f\n",i,t);
        }
    }

    return 0;
}
