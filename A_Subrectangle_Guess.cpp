#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,m,mi,mj,mx=-1000000001,x,a,b;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                if(x>mx)
                {
                    mx=x;
                    mi=i;
                    mj=j;
                }
            }
        }
        a=max(n-mi,mi+1);
        b=max(m-mj,mj+1);
        cout<<a*b<<"\n";
    }
    return 0;
}