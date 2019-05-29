#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, c;
    double a, b, sum, avg;
    while(scanf("%d",&n)==1){
    for(i=1; i<=n; i++)
    {
        sum=0;
        avg=0;
        for(j=1; j<=12; j++)
        {
            cin>>a;
            sum=sum+a;
        }
        avg=sum/12.0;
        c = avg/1000.0;
        b=fmod(avg,1000.0);
        if(avg < 999.0)
        printf("%d $%.2lf\n",i,avg);
        else
        printf("%d $%d,%.2lf\n",i,c,b);
    }
    }
    return 0;
}
