#include<stdio.h>
#include<string.h>
int main()
{
    int i=1;
    char hritee[10];
    while(gets(hritee))
    {
        if(strcmp(hritee,"*")==0)
        {
            break;
        }
        else if(strcmp(hritee,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i=i+1;
    }
    return 0;
}
