#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, max=0, len;
    char a[101][101];
    n=0;
    for (i = 0; i < 101; i++) {
        for (j = 0; j < 101; j++)
            a [i] [j] = ' ';
    }
    while(gets(a[n]))
    {
        len=strlen(a[n]);
        if(len>max)
            max=len;
        a[n][len]=' ';
        n++;
    }
    for(i=0; i<max; i++)
    {
        for(j=n-1; j>=0; j--)
        {
            printf("%c",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
