#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double h, r, i, t, e;
    int k=1, j;
    while(scanf("%d",&j)==1&&j!=0)
    {
        if(j==1)
        {
            scanf("%lf%lf%lf",&h,&r,&i);
            t=(r-h)/i;
            e=(((h+r)/2)*i);
            printf("Case %d: %.3lf %.3lf\n",k,e,t);
        }
        else if(j==2)
        {
            scanf("%lf%lf%lf",&h,&r,&t);
            i=(r-h)/t;
            e=(((h+r)/2)*i);
            printf("Case %d: %.3lf %.3lf\n",k,e,i);
        }
        else if(j==3)
        {
            scanf("%lf%lf%lf",&h,&t,&e);
            r=sqrt((h*h)+(2*t*e));
            i=(r-h)/t;
            printf("Case %d: %.3lf %.3lf\n",k,r,i);
        }
        else if(j==4)
        {
            scanf("%lf%lf%lf",&r,&t,&e);
            h=sqrt((r*r)-(2*t*e));
            i=(r-h)/t;
            printf("Case %d: %.3lf %.3lf\n",k,h,i);
        }
        k=k+1;
    }
    return 0;
}
