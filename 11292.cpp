#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, k, d, ans;
    while(scanf("%d%d",&n,&m)==2&&(n!=0&&m!=0))
    {
        int a[20002], b[20002];
        ans=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(j=0; j<m; j++)
        {
            cin>>b[j];
        }
        sort(a,a+n);
        sort(b,b+m);
        if(n>m)
        {
            printf("Loowater is doomed!\n");
        }
        else
        {
            i=0;
            j=0;
            k=0;
            while(j<m)
            {
                if(a[i]<=b[j])
                {
                    ans=ans+b[j];
                    k++;
                    i++;
                    j++;
                }
                else
                {
                    j++;
                }
                if(k==n)
                {
                    printf("%d\n",ans);
                    break;
                }
            }
            if(k!=n)
            {
                printf("Loowater is doomed!\n");
            }
        }
    }
    return 0;
}
