#include<stdio.h>
#include<math.h>
int main()
{
int status[50000];
int prime[5000];
int n, i, j, num, count = 0, c;

for(i=4;i< 46350;i+=2)
status[i] = 1;
prime[count++]=2;
for(j=3;j<=46350;j++)
{
if(status[j]==0)
{
prime[count++]=j;
for(i=j*j;i< 46350 && i>0 ;i+=j*2)
{ status[i]=1; }
}
}
while(scanf("%d",&n)==1 && n!=0)
{
printf("%d =", n);
c=0;
if(n<0)
{
printf(" %d", -1);
c++;
}
num = sqrt(abs(n));
for(i=0; i<count && prime[i]<=num ; i++)
{
while(n%prime[i]==0)
{
if(c!=0)
printf(" x %d",prime[i]);
else
printf(" %d",prime[i]);
c++;
n = n/prime[i];
}
}
if(n!=-1 && n!=1)
{
if(c!=0)
printf(" x %d",abs(n));
else
printf(" %d",abs(n));
}
printf("\n");
}
return 0;
}
