#include<stdio.h>
int main()
{
    int n,c;
    while(scanf("%d",&n)==1&&n!=0)
    {
        c=0;
        while(n>=3)
        {
            n=n-3;
            n=n+1;
           c=c+1;
        }
        n=n+1;
        if(n==3)
        {
            c=c+1;
        }
        printf("%d\n",c);
    }
    return 0;
}
