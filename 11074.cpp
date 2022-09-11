#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int sabiha, tasnim, hritee;
    int i=1, j, k, l, c, d, e;
    while(scanf("%d%d%d",&sabiha,&tasnim,&hritee)==3&&(sabiha!=0||tasnim!=0||hritee!=0))
    {
        cout<<"Case "<<i<<":"<<endl;
        l=(sabiha*hritee)+(tasnim*(hritee+1));
        for(j=1; j<=hritee; j++)
        {
            for(k=1; k<=tasnim; k++)
            {
                for(c=1; c<=l; c++)
                    cout<<'*';
                cout<<endl;
            }
            for(k=1; k<=sabiha; k++)
            {
                for(c=1; c<=hritee; c++)
                {
                    for(d=1; d<=tasnim; d++)
                        cout<<'*';
                    for(e=1; e<=(l-((hritee+1)*tasnim))/hritee; e++)
                        cout<<'.';
                }
                for(c=1; c<=tasnim; c++)
                    cout<<"*";
                cout<<endl;
            }
        }
        for(k=1; k<=tasnim; k++)
        {
            for(c=1; c<=l; c++)
                cout<<'*';
            cout<<endl;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
