#include<stdio.h>
#include<string.h>
int main()
{
    int i, l;
    char a[100];
    while(gets(a))
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        {
        printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
