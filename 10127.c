#include<stdio.h>
int main()
{
    long int n, a, k, c;
    while(scanf("%ld",&n)==1)
    {
        a=1;
        k=1;
        c=1;
        while(k!=0)
        {
            if(a<n)
            {
                a=(a*10)+1;
                c=c+1;
            }
            k=a%n;
            a=k;
        }
        printf("%ld\n",c);
    }
    return 0;
}
