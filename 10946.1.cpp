#include<bits/stdc++.h>
using namespace std;
#define hritee_pii pair<int ,int>
#define mem(x,y) memset(x,y,sizeof(x))
#define hritee_u first
#define hritee_v second
int hritee_fx[]={1,-1,0,0};
int hritee_fy[]={0,0,1,-1};
int hritee_vaabkumari[100][100];
int hritee_h, hritee_w;
char HRITEE[100][100];
struct hritee_matrix{
    int hritee_INT;
    char hritee_CH;
}hritee_queen[3000];
bool hritee_cmp(hritee_matrix hritee_left, hritee_matrix hritee_right)
{
    if(hritee_left.hritee_INT==hritee_right.hritee_INT)
        return hritee_left.hritee_CH<hritee_right.hritee_CH;
    else
        return hritee_left.hritee_INT>hritee_right.hritee_INT;
}
int hritee_bfs(int hritee_i, int hritee_j)
{
    int hritee_count=1;
    queue<hritee_pii>hritee_pori;
    hritee_pori.push(hritee_pii(hritee_i,hritee_j));
    hritee_vaabkumari[hritee_i][hritee_j]=1;
    while(!hritee_pori.empty())
    {
        hritee_pii hritee_top=hritee_pori.front();
        for(int hritee_k=0; hritee_k<4; hritee_k++)
        {
            int hritee_tx=hritee_top.hritee_u+hritee_fx[hritee_k];
            int hritee_ty=hritee_top.hritee_v+hritee_fy[hritee_k];
            if(!hritee_vaabkumari[hritee_tx][hritee_ty]&&hritee_tx>=0&&hritee_tx<hritee_h&&hritee_ty>=0&&hritee_ty<hritee_w&&
               HRITEE[hritee_tx][hritee_ty]==HRITEE[hritee_i][hritee_j])
            {
                hritee_vaabkumari[hritee_tx][hritee_ty]=1;
                hritee_pori.push(hritee_pii(hritee_tx,hritee_ty));
                hritee_count++;
            }
        }
        hritee_pori.pop();
    }
    return hritee_count;
}
int main()
{
    int hritee_i, hritee_j, hritee_c, hritee_k=1;
    while(scanf("%d%d",&hritee_h,&hritee_w)==2&&hritee_h!=0&&hritee_w!=0)
    {
        mem(HRITEE,0);
        mem(hritee_vaabkumari,0);
        for(hritee_i=0; hritee_i<hritee_h; hritee_i++)
        {
            for(hritee_j=0; hritee_j<hritee_w; hritee_j++)
            {
                cin>>HRITEE[hritee_i][hritee_j];
            }
        }

        hritee_c=0;
        for(hritee_i=0; hritee_i<hritee_h; hritee_i++)
        {
            for(hritee_j=0; hritee_j<hritee_w; hritee_j++)
            {
                if(!hritee_vaabkumari[hritee_i][hritee_j]&&HRITEE[hritee_i][hritee_j]!='.')
                {
                    hritee_queen[hritee_c].hritee_INT=hritee_bfs(hritee_i,hritee_j);
                    hritee_queen[hritee_c].hritee_CH=HRITEE[hritee_i][hritee_j];
                    hritee_c++;

                }
            }
        }
        sort(hritee_queen,hritee_queen+hritee_c,hritee_cmp);
        cout<<"Problem "<<hritee_k<<':'<<endl;
        for(hritee_i=0; hritee_i<hritee_c; hritee_i++)
        {
            cout<<hritee_queen[hritee_i].hritee_CH;
            cout<<' ';
            cout<<hritee_queen[hritee_i].hritee_INT;
            cout<<endl;
        }
        hritee_k++;
    }
    return 0;
}
