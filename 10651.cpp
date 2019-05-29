#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
int dp[1<<14+2];
int m=0;
int SET(int N, int pos){return N=N | (1<<pos);}
int reset(int N, int pos){return N=N & ~(1<<pos);}
bool check(int N, int pos){return (bool)(N & (1<<pos));}
int call(int mask)
{
    if(dp[mask]!=-1) return dp[mask];
    int c=0;
    for(int i=0; i<12; i++)
    {
        if(check(mask,i)!=0)
        {
            c++;
        }
    }
    int mm;
    int mn=1<<28;
    for(int i=0; i<12; i++)
    {
        int res=0;
        if((i+2)<12&&check(mask,12-i-1)!=0&&check(mask,12-i-2)!=0&&check(mask,12-i-3)==0)
        {
            mm=SET(mask,12-i-3);
            mm=reset(mm,12-i-1);
            mm=reset(mm,12-i-2);
            res=call(mm);
            mn=min(mn,res);
        }
        if((i-2)>=0&&check(mask,12-i-1)!=0&&check(mask,12-i)!=0&&check(mask,12-i+1)==0)
        {
            mm=SET(mask,12-i+1);
            mm=reset(mm,12-i-1);
            mm=reset(mm,12-i);
            res=call(mm);
            mn=min(mn,res);
        }
    }
    dp[mask]=min(c,mn);
    return dp[mask];
}
int main()
{
    int n, i, j, msk, ans;
    char ch;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        mem(dp,-1);
        msk=0;
        for(i=0; i<12; i++)
        {
            cin>>ch;
            if(ch=='o')
            {
                msk=SET(msk,12-i-1);
            }
        }
        ans=call(msk);
        printf("%d\n",ans);
    }
    return 0;
}
