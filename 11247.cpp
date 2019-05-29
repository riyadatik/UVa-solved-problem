#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int total;
    long long int m, x;
    while(scanf("%lld%lld",&m,&x)==2)
    {
    	if(m==0 &&x==0)   break;
        if(x==100)
            cout<<"Not found"<<endl;
        else
        {
            total=(m-1)*100/(100-x);
             if(((m-1)*100)%(100-x)==0)
                    total--;
            if(total<m)
                cout<<"Not found"<<endl;
            else
            {

               cout<<total<<endl;
            }
        }
    }
    return 0;
}
