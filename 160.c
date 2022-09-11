#include<stdio.h>
#include<math.h>

int main()
{
    int a[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
    long long int n, i, j, k, l, c[1000], count, x, m;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        l=1; j=1;
        for(i=0;a[i]<=n;i++)
        {
            count=0;
            for(j=2;j<=n;j++)
            {
                m=j;
                while(m%a[i]==0)
                {
                    m = m/a[i];
                    count++;
                }
            }
            c[l++]=count;
        }
        printf("%3lld! =",n);
        for(i=1;i<l;i++)
        {
            printf("%3lld",c[i]);
            if(i==15 && n>52)
                printf("\n      ");
        }
        printf("\n");
    }
    return 0;
}
