#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    char a[7], ch;
    scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%s",&a);
            if(strlen(a)==5)
            {
                printf("3\n");
            }
            else if((a[0]=='o'&&a[1]=='n')||
                    (a[0]=='o'&&a[2]=='e')||
                    (a[1]=='n'&&a[2]=='e'))
                    {
                    printf("1\n");
                    }
                    else
                    {
                        printf("2\n");
                    }
        }
    return 0;
}
