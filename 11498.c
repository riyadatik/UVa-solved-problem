#include<stdio.h>
int main()
{
    int k, x, y, n, m, i;
    while(scanf("%d",&k)==1&&k!=0)
    {
        scanf("%d%d",&n,&m);
        for(i=1; i<=k; i++)
        {
            scanf("%d%d",&x,&y);
            if(x==n||y==m)
            {
                printf("divisa\n");
            }
            else if(x>n&&y>m)
            {
                printf("NE\n");
            }
            else if(x<n&&y<m)
            {
                printf("SO\n");
            }
            else if(x>n&&y<m)
            {
                printf("SE\n");
            }
            else if(x<n&&y>m)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
