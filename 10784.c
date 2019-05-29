#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, i, k;
    double c;
    i=1;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        printf("Case %lld: ",i);
        c=(sqrt((8.0*n)+9.0)+3.0)/2.0;
        k=c;
        if(k!=c)
        {
            k=k+1;
        }
        printf("%lld\n",k);
        i=i+1;
    }
    return 0;
}
