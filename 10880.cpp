#include<iostream>
#include<set>
#include<cmath>
using namespace std;
int main()
{
    int n, c, r, i, j, q;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        set<int>s;
        set<int>::iterator it;
        cin>>c>>r;
        cout<<"Case #"<<i<<":";
        if(c==r){
            cout<<" "<<0;
        }
        else{
        q=c-r;
        for(j=1; j<=sqrt(q); j++){
            if(q%j==0)
            {
                s.insert(j);
                s.insert(q/j);
            }
        }
        for(it=s.begin(); it!=s.end(); it++){
            if(*it>r)
            cout<<" "<<*it;
        }
        }
        cout<<endl;
    }
    return 0;
}
