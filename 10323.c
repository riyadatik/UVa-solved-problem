#include<stdio.h>
long long fact(long long int n);
int main()
{
    long long int n, c;
    while(scanf("%lld",&n)==1)
    {
        if(n<8&&n>0)
        {
            printf("Underflow!\n");
        }
        else if(n>13)
        {
            printf("Overflow!\n");
        }
        else if(n<=0)
        {
            n=n*(-1);
            if(n%2==1)
            {
                printf("Overflow!\n");
            }
            else
            {
                printf("Underflow!\n");
            }
        }
        else
        {
            c=fact(n);
            printf("%lld\n",c);
        }
    }
    return 0;
}
long long fact(long long int x)
{
    if(x==0)
    return (1);
    else
    return (x*fact(x-1));
}
