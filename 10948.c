#include<stdio.h>
#include<math.h>
#define SIZE 1000050
int a[SIZE];
void seiv();
int main()
{
    int n, i, x;
    seiv();
    while(scanf("%d",&n)==1&&n!=0)
    {
        x=0;
            for(i=2; i<n; i++)
            {
                if(a[i]==0&&a[n-i]==0)
                {
                    printf("%d:\n",n);
                    printf("%d+%d\n",i,n-i);
                    x=1;
                    break;
                }
            }
           if(x==0)
           {
                printf("%d:\n",n);
                printf("NO WAY!\n");
           }
}
    return 0;
}
void seiv()
{
    int j, k;
    for(j=1; j<SIZE; j++)
            {
                a[j]=0;
            }
            for(j=4; j<=SIZE; j=j+2)
            {
                a[j]=1;
            }
            for(j=3; j<=sqrt(SIZE); j=j+2)
            {
                if(a[j]==0)
                {
                    for(k=2*j; k<=SIZE; k=k+j)
                    {
                        a[k]=1;
                    }
                }
            }
            a[1]=1;
}
