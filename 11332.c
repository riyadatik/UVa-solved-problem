#include<stdio.h>
int main()
{
    long int a, i, sum;
    while(scanf("%ld",&a)&&a!=0)
    {
        while(a>9)
        {
            sum=0;
        while(a!=0)
        {
            i=a%10;
            sum=sum+i;
            a=a/10;
        }
        a=sum;
        }
        printf("%ld\n",a);

    }
    return 0;
}
