#include<stdio.h>
int main()
{
    int i, len, k;
    char a[100];
    while(gets(a))
    {
        k=0;
        len=strlen(a);
        len=len-1;
        for(i=0; i<=len; i++)
        {
        if(
          ((a[i]>='a'&&a[i]<='z')||
          (a[i]>='A'&&a[i]<='Z'))
          &&
          (a[i+1]<'a'||a[i+1]>'z') &&
           (a[i+1]<'A'||a[i+1]>'Z')
          )
            {
                k=k+1;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
