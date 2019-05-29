#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair < ll , ll > pll;
#define pii pair<int, int>
#define piii pair<pii, pii>
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define pb push_back
#define pu push
#define uu first
#define vv second
#define DIST(x1,y1,x2,y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define pi acos(-1)
#define ull unsigned long long int
int check[35][35];
char number[35], ch[35];
string s;
int k, n;
void call(int pos, int last)
{
    if(pos==k+1)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<number[i];
        }
        cout<<endl;
        return;
    }
    for(int i=last+1; i<=n-k+pos; i++)
    {
            number[pos]=ch[i];
            call(pos+1, i);
            while(ch[i]==ch[i+1]) i++;
    }
}
int main()
{
    while(cin>>s)
    {
        cin>>k;
        n=s.size();
        sort(s.begin(), s.end());
        for(int i=0; i<n; i++)
        {
            ch[i+1]=s[i];
        }
        call(1, 0);
        mem(check, 0);
    }
    return 0;
}
