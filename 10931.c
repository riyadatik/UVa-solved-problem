#include<stdio.h>
int main()
{
    long int a[100000], b, i, k, s;
    while(scanf("%ld",&b)&&b!=0)
    {
        i=1;
        while(b!=0)
        {
            a[i]=b%2;
            b=b/2;
            i++;
        }
        s=0;
        for(k=i-1; k>0; k--)
        {
            if(a[k]==1)
            {
                s=s+1;
            }
        }
        printf("The parity of ");
        for(k=i-1; k>0; k--)
        {
            printf("%ld",a[k]);
        }
        printf(" is %ld (mod 2).\n",s);
    }
    return 0;
}
