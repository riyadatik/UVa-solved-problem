#include<bits/stdc++.h>
using namespace std;
#define LL long long int
double c[105], t[105], r[105];
LL n, q, chp;
//double sum;
LL F(double mid, LL m)
{
    double totl=0, res;
    for(int i=1; i<=n; i++)
    {
        res=((c[i]/t[i])*mid);
        res=res-r[i];
        if(res>0)
        {
            totl=totl+res;
        }
    }
    if(totl<=(chp*mid*m)) return 1;
    return 0;
}
double bs(LL m)
{
    double lo=0, hi=1000000000.0, ans;
    LL cnt=200, res;
    while(cnt--)
    {
        double mid=(lo+hi)/2;
        res=F(mid,m);
        if(res==1)
        {
            ans=mid;
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    return ans;
}
int main()
{
  LL i, j=1, k, ans, m;
  while(scanf("%lld %lld",&n,&q)==2&&n!=0&&q!=0)
  {
      double ret=0, res;
      //sum=0;
      scanf("%lld",&chp);
      for(i=1; i<=n; i++)
      {
          scanf("%lf %lf %lf",&c[i],&t[i],&r[i]);
          ret=ret+(c[i]/t[i]);
          //sum=sum+r[i];
      }
      ans=ceil(ret/chp);
      printf("Case %lld:\n",j);
      printf("%lld\n",ans);
      for(i=1; i<=q; i++)
      {
          scanf("%lld",&m);
          res=bs(m);
          if(res>=100000)
          {
              printf("-1.000\n");
          }
          else
          {
              printf("%.3lf\n",res);
          }
      }
      j++;
  }
  return 0;
}
