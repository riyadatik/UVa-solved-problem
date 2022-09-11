#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
int main()
{
    int n, l, i;
    double hritee, riyad, a2, r, w;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&l);
            r=l/5.0;
            w=(l*6.0)/10;
            riyad=PI*r*r;
            a2=l*w;
            hritee=a2-riyad;
            printf("%.2lf %.2lf\n",riyad, hritee);
        }
    }
    return 0;
}
