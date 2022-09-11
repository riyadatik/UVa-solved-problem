#include<stdio.h>
#include<string.h>
int main()
{
    int n, j, i, c, d, l;
    char a[100];
    while(scanf("%d",&n)==1)
    {
        getchar();
        for(j=1; j<=n; j++)
        {
        gets(a);
        c=1;
        d=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]=='O')
            {
                d=d+c;
                c=c+1;
            }
            else if(a[i]=='X')
            {
                c=0;
                d=d+c;
                c=c+1;
            }
        }
        printf("%d\n",d);
        }
    }
    return 0;
}
