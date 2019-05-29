    #include<stdio.h>
    int main()
    {
        int n, i, j, k, c, d, m, s;
        int a[10005];
        while(scanf("%d",&n)!=EOF)
        {
            d=1000000;
            for(i=1; i<=n; i++)
            {
                scanf("%d",&a[i]);
            }
            scanf("%d",&m);
            for(i=1; i<n; i++)
            {
                for(j=2; j<=n; j++)
                {
                    if((a[i]+a[j]==m))
                    {
                        if(abs(a[i]-a[j])<d)
                        {
                            c=a[i];
                            k=a[j];
                            d=abs(a[i]-a[j]);
                        }
                    }
                }
            }
            if(c>k)
            {
                s=c;
                c=k;
                k=s;
            }
            printf("Peter should buy books whose prices are %d and %d.\n\n",c,k);
        }
        return 0;
    }
