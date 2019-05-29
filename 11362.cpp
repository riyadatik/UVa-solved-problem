#include<bits/stdc++.h>
typedef struct node Node;
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x))
#define pii pair<int, int>
#define sc scanf
#define pf printf
#define pb push_back
#define uu first
#define vv second
#define DIST(x1,y1,x2,y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define MAX_NODE 100005
#define MAX_LEN 100
char s[MAX_LEN];
int node[MAX_NODE][11];
int isNumber[MAX_NODE];
int sz, fg;
void Insert()
{
    int bl=0;
    scanf("%s",s);
    int now=0;
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(node[now][s[i]-'0']==0)
        {
            node[now][s[i]-'0']=++sz;
            bl=1;
        }
        now=node[now][s[i]-'0'];
        if(isNumber[now])
        {
            fg=1;
        }
    }
    isNumber[now]=1;
    if(bl==0)
    {
        fg=1;
    }
}
int main()
{
    int t, n, i, j, k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        mem(node, 0);
        mem(isNumber, 0);
        fg=0;
        sz=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            Insert();
        }
        if(fg==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
