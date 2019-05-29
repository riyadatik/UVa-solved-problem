#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int hritee;
    while(scanf("%d",&hritee)==1)
    {
        if(hritee%6==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
