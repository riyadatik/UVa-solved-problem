#include<stdio.h>
int main()
{
    int n, i, c;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        c=0;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
            c=c+i;
    }
        if(c==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(c<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
