#include<stdio.h>
int main()
{
    int n, c;
    while(scanf("%d",&n)==1&&n!=0)
    {
        c=n;
        if(n<=100)
        {
        printf("f91(%d) = 91\n",n);
        }
        else if(n>=101)
        {
            c=n-10;
            printf("f91(%d) = %d\n",n, c);
        }
    }
    return 0;
}
