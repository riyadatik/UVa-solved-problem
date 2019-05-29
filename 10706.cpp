#include<bits/stdc++.h>
using namespace std;
long long int sum[100005], digit[1000005];
long long int F(long long int i)
{
    long long int d=0;
    while(i!=0)
    {
        i=i/10;
        d++;
    }
  return d;
}
long long int binary_src(long long int lo, long long int hi, long long int target)
{
    long long int mid;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(sum[mid]==target)
        {
            return mid;
        }
        else if(sum[mid]>target)
        {
            hi=mid-1;
        }
        else if(sum[mid]<target)
        {
            lo=mid+1;
        }
    }
    return lo;
}
int main()
{
    long long int t, n, i, j, k, s=0, d, u, v, x, y, res, z;
    long long int h[15], l, e, flag, ans, rem, cnt;
    scanf("%lld",&t);
    for(i=1, s=0; s<2147483647; i++)
    {
        digit[i]=digit[i-1]+F(i);
        sum[i]=sum[i-1]+digit[i];
        s=s+digit[i];
    }
    for(x=1; x<=t; x++)
    {
        scanf("%lld",&n);
        res=binary_src(1,i,n);
        flag=0;
        cnt=sum[res-1];
        for(y=1; y<=sum[res]; y++)
        {
            e=y;
            l=0;
            while(e!=0)
            {
                rem=e%10;
                e=e/10;
                h[l]=rem;
                l++;
            }
            for(z=l-1; z>=0; z--)
            {
                cnt++;
                if(cnt==n)
                {
                    cout<<h[z]<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
    return 0;
}
