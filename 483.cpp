#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i, j, k, l, c;
    char a[1000], b[100];
    while(gets(a))
    {
        j=1;
        k=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]==' '||i==l-1)
            {
                if(i==l-1)
                {
                    b[j]=a[i];
                    j++;
                    k++;
                }
                for(c=k; c>=1; c--)
                    cout<<b[c];
                if(i!=l-1)
                    cout<<" ";
                j=1;
                k=0;
            }
            else
            {
                b[j]=a[i];
                j++;
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}
