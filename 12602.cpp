#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, c, ans, total1, total2, k;
    char ch;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        total1=0;
        total2=0;
        c=0;
        k=2;
        getchar();
        for(j=0; j<8; j++)
        {
            scanf("%c",&ch);
            if(j<3)
            {
                c=ch;
                c=c-65;
                total1=total1+(c*pow(26,k));
                k--;
            }
            else if(j>3)
            {
                total2=(total2*10)+(ch-'0');
            }
        }
        ans=abs(total1-total2);
        if(ans<=100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }
    return 0;
}
