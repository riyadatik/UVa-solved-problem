#include<bits/stdc++.h>
using namespace std;
#define pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define u first
#define v second
int hritee_1[]={1,-1,0,0};
int hritee_2[]={0,0,1,-1};
int hritee_vaabkumari[100][100];
int hritee_queen1, hritee_queen2;
char HRITEE[100][100];
int bfs(int hritee_3, int hritee_4)
{
    int hritee_queen;
    hritee_queen=1;
    queue<pii>hritee_pori;
    hritee_pori.push(pii(hritee_3,hritee_4));
    hritee_vaabkumari[hritee_3][hritee_4]=1;
    while(!hritee_pori.empty())
    {
        pii hritee_top=hritee_pori.front();
        for(int hritee_11=0; hritee_11<4; hritee_11++)
        {
            int hritee_tx=hritee_top.u+hritee_1[hritee_11];
            int hritee_ty=hritee_top.v+hritee_2[hritee_11];
            if(!hritee_vaabkumari[hritee_tx][hritee_ty]&&hritee_tx>=0&&hritee_tx<hritee_queen1&&hritee_ty>=0&&
               hritee_ty<hritee_queen2&&HRITEE[hritee_tx][hritee_ty]==HRITEE[hritee_3][hritee_4])
            {
                hritee_vaabkumari[hritee_tx][hritee_ty]=1;
                hritee_pori.push(pii(hritee_tx,hritee_ty));
                hritee_queen++;
            }
            //cout<<hritee<<endl;
        }
        //cout<<1<<endl;
        hritee_pori.pop();
    }
    return hritee_queen;
}
int main()
{
    int  hritee_3, hritee_4, hritee_5, hritee_6, hritee_7, hritee_8, hritee_9=1;
    char hritee_10;
    while(scanf("%d%d",&hritee_queen1,&hritee_queen2)==2&&(hritee_queen1!=0||hritee_queen2!=0))
    {
        int hritee_pori1[3000];
        char hritee_pori2[3000];
        mem(HRITEE,0);
        mem(hritee_vaabkumari,0);
        for(hritee_3=0; hritee_3<hritee_queen1; hritee_3++)
        {
            for(hritee_4=0; hritee_4<hritee_queen2; hritee_4++)
            {
                cin>>HRITEE[hritee_3][hritee_4];
            }
        }
        hritee_5=0;
        for(hritee_3=0; hritee_3<hritee_queen1; hritee_3++)
        {
            for(hritee_4=0; hritee_4<hritee_queen2; hritee_4++)
            {
                if(!hritee_vaabkumari[hritee_3][hritee_4]&&'A'<=HRITEE[hritee_3][hritee_4]&&HRITEE[hritee_3][hritee_4]<='Z')
                {
                   int hritee_myheart=bfs(hritee_3,hritee_4);
                    hritee_pori1[hritee_5]=hritee_myheart;
                    hritee_pori2[hritee_5]=HRITEE[hritee_3][hritee_4];
                    hritee_5++;

                }
            }
        }
        for(hritee_6=0; hritee_6<hritee_5-1; hritee_6++)
        {
            for(hritee_7=0; hritee_7<hritee_5-1; hritee_7++)
            {
                if(hritee_pori1[hritee_7]>hritee_pori1[hritee_7+1])
                {
                    hritee_8=hritee_pori1[hritee_7];
                    hritee_pori1[hritee_7]=hritee_pori1[hritee_7+1];
                    hritee_pori1[hritee_7+1]=hritee_8;
                    hritee_10=hritee_pori2[hritee_7];
                    hritee_pori2[hritee_7]=hritee_pori2[hritee_7+1];
                    hritee_pori2[hritee_7+1]=hritee_10;
                }
                else if(hritee_pori1[hritee_7]==hritee_pori1[hritee_7+1]&&hritee_pori2[hritee_7]<hritee_pori2[hritee_7+1])
                {
                    hritee_8=hritee_pori1[hritee_7];
                    hritee_pori1[hritee_7]=hritee_pori1[hritee_7+1];
                    hritee_pori1[hritee_7+1]=hritee_8;
                    hritee_10=hritee_pori2[hritee_7];
                    hritee_pori2[hritee_7]=hritee_pori2[hritee_7+1];
                    hritee_pori2[hritee_7+1]=hritee_10;
                }
            }
        }
        cout<<"Problem "<<hritee_9<<':'<<endl;
        for(hritee_3=hritee_5-1; hritee_3>=0; hritee_3--)
        {
            cout<<hritee_pori2[hritee_3];
            cout<<' ';
            cout<<hritee_pori1[hritee_3];
            cout<<endl;
        }
        hritee_9++;
    }
    return 0;
}
