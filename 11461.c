#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, k;
    float r;
        while(scanf("%d%d",&a,&b)&&(a!=0||b!=0))
        {
            k=0;
        for(c=a; c<=b; c++)
        {
        d=sqrt(c);
        r=sqrt(c);
        if(d==r)
        {
            k++;
        }
        }

        printf("%d\n",k);
    }

    return 0;
}
