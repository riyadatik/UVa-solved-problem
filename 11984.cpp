#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int c, f, i, hritee;
    double vaabkumari;
    scanf("%d",&hritee);
    for(i=1; i<=hritee; i++)
    {
        scanf("%d%d",&c,&f);
        vaabkumari=(f/1.8)+c;
        printf("Case %d: %.2lf\n",i,vaabkumari);
    }
    return 0;
}
