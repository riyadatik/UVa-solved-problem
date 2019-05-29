#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, s, d, k;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if((a+b)>c&&(a+c)>b&&(b+c)>a)
        {
            s=(a+b+c)/2;
            d=sqrt(s*(s-a)*(s-b)*(s-c));
            k=(d*4)/3;
            printf("%.3lf\n",k);
        }
        else
        {
            printf("-1.000\n");
        }
    }
    return 0;
}
