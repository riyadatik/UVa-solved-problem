#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j=1, sum;
    int a[]={1, 1, 1, 3, 8, 21, 43, 69, 102, 145,
    197, 261, 336, 425, 527, 645, 778, 929, 1097, 1285};
    while(scanf("%d",&n)==1&&n!=0)
    {
        /*set<int>s;
        for(i=0; i<n; i++)
            a[i]=i;
        sum=0;
        for(i=0; i<n-1; i++)
            sum=sum+(a[i]*a[i+1]);
        sum=sum+(a[0]*a[n-1]);
        s.insert(sum);
        while(next_permutation(a, a+n))
        {
            sum=0;
            for(i=0; i<n-1; i++)
                sum=sum+(a[i]*a[i+1]);
            sum=sum+(a[0]*a[n-1]);
            s.insert(sum);
        }
       cout<<"Case #"<<j<<": "<<s.size()<<endl;*/
       cout<<"Case #"<<j<<": "<<a[n-1]<<endl;
       j++;
    }
    return 0;
}
