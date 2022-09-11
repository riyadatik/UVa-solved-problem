#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char hritee, c;
    while(hritee=getchar())
    {
        if(hritee==EOF)
            return 0;
         if (hritee=='a' || hritee=='A' || hritee=='e' || hritee=='E' || hritee=='i' || hritee=='I' ||
             hritee=='o' || hritee=='O' || hritee=='u' || hritee=='U')
         {
             while(isalpha(hritee))
             {
                 cout<<hritee;
                 hritee=getchar();
             }
             cout<<"ay";
         }
         else if(isalpha(hritee))
         {
             c=hritee;
             hritee=getchar();
             while(isalpha(hritee))
             {
                 cout<<hritee;
                 hritee=getchar();
             }
             cout<<c<<"ay";
         }
         cout<<hritee;
    }
    return 0;
}
