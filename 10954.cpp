#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum, res, num, c;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        priority_queue<int>q;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>num;
            q.push(-num);
        }
        for(i=0; i<n-1; i++)
        {
            int d=-q.top();
            q.pop();
            int b=-q.top();
            q.pop();
            c=d+b;
            sum+=c;
            q.push(-c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
