#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int hritee, riyad, c, d;
    while(scanf("%d%d",&hritee,&riyad)==2&&(hritee!=-1&&riyad!=-1))
    {
        if(riyad>hritee)
            swap(riyad,hritee);
        c=hritee-riyad;
        d=min(c,100-c);
        printf("%d\n",d);
    }
    return 0;
}
