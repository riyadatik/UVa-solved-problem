#include<stdio.h>
int main()
{
    int n, i, j;
    double l, w, d, m, t;
    while(scanf("%d",&n)==1)
    {
        j=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lf%lf%lf%lf",&l,&w,&d,&m);
            t=l+w+d;
            if(((l<=56&&w<=45&&d<=25)||t<=125)&&m<=7)
            {
                j=j+1;
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
