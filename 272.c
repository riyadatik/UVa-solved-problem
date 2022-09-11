#include<stdio.h>
#include<string.h>
int main()
{
    long long int i, c=1, l;
    char a[100000];
    while(gets(a))
    {
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(c%2==1&&a[i]=='"')
            {
                printf("``");
                c=c+1;
            }
            else if(c%2==0&&a[i]=='"')
            {
                printf("''");
                c=c+1;
            }
            else
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
