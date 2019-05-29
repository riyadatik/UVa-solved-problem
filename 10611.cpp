#include<bits/stdc++.h>
using namespace std;
long long int a[50005];
long long int binary_src1(long long int lo, long long hi, long long int target)
{
    long long int mid, index=-1;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(a[mid]==target)
        {
            index=mid;
            hi=mid-1;
        }
        else if(a[mid]>target)
        {
            hi=mid-1;
        }
        else if(a[mid]<target)
        {
            lo=mid+1;
        }
    }
    if(index!=-1) return index;
    return mid;
}
long long int binary_src2(long long int lo, long long hi, long long int target)
{
    long long int mid, index=-1;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(a[mid]==target)
        {
            index=mid;
            lo=mid+1;
        }
        else if(a[mid]>target)
        {
            hi=mid-1;
        }
        else if(a[mid]<target)
        {
            lo=mid+1;
        }
    }
    if(index!=-1) return index;
    return mid;
}
int main()
{
    long long int n, i, j, k, q, ans1, ans2, ans;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&q);
    for(i=1; i<=q; i++)
    {
        scanf("%lld",&k);
        ans=binary_src1(0, n-1, k);
        if(a[ans]==k)
        {
            ans1=ans-1;
            ans2=binary_src2(0, n-1, k);
            ans2++;
        }
        else
        {
            if(a[ans]<k)
            {
                ans1=ans;
                ans2=ans+1;
            }
            else
            {
                ans1=ans-1;
                ans2=ans;
            }
        }
        if(ans1<0&&ans2>n-1)
        {
            printf("X X\n");
        }
        else if(ans1<0)
        {
            printf("X %lld\n",a[ans2]);
        }
        else if(ans2>n-1)
        {
            printf("%lld X\n",a[ans1]);
        }
        else
        {
            printf("%lld %lld\n",a[ans1],a[ans2]);
        }
    }
    return 0;
}
