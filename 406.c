#include<stdio.h>
#include<math.h>
int main()
{
    int n, b, c, i, j, k, m, x;
    int a[1050];
    while(scanf("%d%d",&n,&c)==2)
    {
        b=1;
        for(i=1; i<=n; i++)
        {
            k=0;
            if(i<=3)
            {
                a[b]=i;
                b=b+1;
            }
            else
            {
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    k=1;
                    break;
                }
            }
            if (k==0)
            {
                a[b]=i;
                b=b+1;
            }
            }
        }
        b=b-1;
        if(c*2>=b)
        {
            printf("%d %d:",n,c);
            for(i=1; i<=b; i++)
            {
                printf(" %d",a[i]);
            }
        }
        else
        {
            if(b%2==1)
            {
                x=(c*2)-1;
                m=((b+1)/2)-((x-1)/2);
                x=m+x-1;
                printf("%d %d:",n,c);
                for(i=m; i<=x; i++)
                {
                    printf(" %d",a[i]);
                }
            }
            else
            {
                x=c*2;
                m=(b/2)-(x/2)+1;
                x=m+x-1;
                printf("%d %d:",n,c);
                for(i=m; i<=x; i++)
                {
                    printf(" %d",a[i]);
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}

