#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    float x, y, r, d, c, k;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%f%f%f",&x,&y,&r);
            d=sqrt((x*x)+(y*y));
            c=r+d;
            k=r-d;
            printf("%.2f %.2f\n",k,c);
        }
    }
    return 0;
}
