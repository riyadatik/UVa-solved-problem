#include<stdio.h>
int main()
{
    long int a, b, c, d, carry, count;
    while(scanf("%ld %ld",&a,&b)==2&&(a!=0||b!=0))
    {
        carry=0;
        count=0;
        while(a!=0||b!=0)
        {
            c=a%10;
            d=b%10;
            if(c+d+count>=10)
            {
                carry=carry+1;
                count=1;
            }
            else
            {
                count=0;
            }
            a=a/10;
            b=b/10;
        }
        if(carry==0)
        {
            printf("No carry operation.\n");
        }
        else if(carry==1)
        {
             printf("%ld carry operation.\n",carry);
        }
        else
        {
            printf("%ld carry operations.\n",carry);
        }
    }
    return 0;
}
