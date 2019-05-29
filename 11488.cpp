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
#define MAX_NODE 100000
#define MAX_LEN 205
char s[MAX_LEN];
int node[MAX_NODE][5];
int tot[100000];
//int isWord[MAX_NODE];
int sz, ans;
void Insert(int j)
{
    scanf("%s",s);
    int len=strlen(s);
    ans=max(ans,len);
    int now=0, i;
    int cnt=0, fg=0;
    for(i=0; i<len; i++)
    {
        if(node[now][s[i]-'0']==0)
        {
            fg=1;
            node[now][s[i]-'0']=++sz;
        }
        else if(fg==0)
        {
            cnt++;
        }
        now=node[now][s[i]-'0'];
        tot[now]++;
        ans=max(ans, tot[now]*cnt);
    }
}
int main()
{
    int t, n, i, j, k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        ans=0;
        sz=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            Insert(j);
        }
        printf("%d\n",ans);
        for(j=0; j<MAX_NODE; j++)
        {
            for(k=0; k<5; k++)
            {
                node[j][k]=0;
            }
        }
        mem(tot,0);
    }
    return 0;
}
