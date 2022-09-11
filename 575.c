#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int i, c, j, k, l;
    char a[100];
    while(scanf("%s",&a))
    {
        l=strlen(a);
        k=0;
        for(i=0; i<l; i++)
        {
            c=a[i]-'0';
            k=k+(c*(pow(2,l-i)-1));
        }
        if(k==0)
        {
            break;
        }
        printf("%ld\n",k);
    }
    return 0;
}
