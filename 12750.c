#include<stdio.h>
#include<string.h>
int main()
{
    int t, n, i, j, k, c;
    char ch;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        c=0;
        k=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            getchar();
            scanf("%c",&ch);
            k=k+1;
            if(k<=3)
            {
                c=c+1;
            }
            if(ch=='W'&&k<=3)
            {
                k=0;
            }
        }
        if(c==n&&k<3)
        {
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        }
        else
        {
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
