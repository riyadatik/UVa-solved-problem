#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n, i, j, k, l;
    int a, b, c, d, e, f;
    char s[601];
    cin>>n;
    getchar();
    for(i=1; i<=n; i++){
        gets(s);
        l=strlen(s);
        k=600;
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        for(j=0; j<l; j++)
        {
            if(s[j]=='A')
                a++;
            else if(s[j]=='G')
                b++;
            else if(s[j]=='I')
                c++;
            else if(s[j]=='M')
                d++;
            else if(s[j]=='R')
                e++;
            else if(s[j]=='T')
                f++;
        }
        if(a/3<k)
            k=a/3;
        if(b/1<k)
            k=b/1;
        if(c/1<k)
            k=c/1;
        if(d/1<k)
            k=d/1;
        if(e/2<k)
            k=e/2;
        if(f/1<k)
            k=f/1;
        cout<<k<<endl;
    }
    return 0;
}
