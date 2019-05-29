#include<stdio.h>
int main()
{
    int m, n, a;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        a=(m*n)-1;
        printf("%d\n",a);
    }
    return 0;
}
