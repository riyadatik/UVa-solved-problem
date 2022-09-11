#include<stdio.h>

int main()
{
    int n, x, y, i=1;
    scanf("%d", &n);
    while(i<=n)
    {
        scanf("%d%d", &x, &y);
        if(x>y)
        printf(">");
        else if(x<y)
        printf("<");
        else
        printf("=");
        printf("\n");
        i++;
    }
    return 0;
}
