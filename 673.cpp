#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>st;
        getline(cin,s);
        if(s.compare("n")==0)
        {
            printf("Yes\n");
            continue;
        }
        if(s.size()==1||s.size()%2!=0)
        {
            printf("No\n");
            continue;
        }
        int f=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='[')
            st.push(s[i]);
            else if(s[i]==')' && !st.empty() && st.top()=='(')
            st.pop();
            else if(s[i]==']' && !st.empty() && st.top()=='[')
            st.pop();
            else
            f=1;
        }
        if(st.empty()&&f==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
