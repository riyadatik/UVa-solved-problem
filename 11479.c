#include<stdio.h>
int main()
{
   long int n, i, a, b, c;
   while(scanf("%d",&n)==1)
   {
        for(i=1; i<=n; i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            if((a+b)<=c||(b+c)<=a||(c+a)<=b)
            {
                printf("Case %ld: Invalid\n",i);
            }
             else if(a<=0 || b<=0 || c<=0)
            {
                printf("Case %ld: Invalid\n",i);
            }
            else if(a==b&&b==c&&c==a)
            {
                printf("Case %ld: Equilateral\n",i);
            }
            else if(((a==b)&&a!=c&&b!=c)||((b==c)&&b!=a&&c!=a)||((c==a)&&c!=b&&a!=b))
            {
                printf("Case %ld: Isosceles\n",i);
            }
            else if(a!=b&&b!=c&&c!=a)
            {
                printf("Case %ld: Scalene\n",i);
            }
        }
   }
    return 0;
}
