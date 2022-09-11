#include<stdio.h>
int main()
{
    long int a, b, diff;
    while(scanf("%ld%ld", &a, &b)!=EOF)
    {
    if(a>=b)
    {
    diff=a-b;
    }
    else
    {
    diff=b-a;
    }
    printf("%ld\n", diff);
    }
    return 0;
}
