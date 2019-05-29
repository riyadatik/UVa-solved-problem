#include<bits/stdc++.h>
using namespace std;
#define fx 1e-4
double p, q, r, s, t, u;
double F(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
double bisection(double lo, double hi)
{
    double mid, res;
    int c=200;
    while(c--)
    {
        mid=(lo+hi)/2.0;
        res=F(mid);
        if(res>0)
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    return mid;
}
int main()
{
    double ans;
    while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        ans=bisection(0.0,1.0);
        if(F(1)*F(0)>0)
        {
            printf("No solution\n");
        }
        else
        {
            printf("%.4lf\n",ans);
        }
    }
    return 0;
}
