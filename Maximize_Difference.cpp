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
        ll n,m;
        cin>>n>>m;
        ll mx=0,N=0,M=0;
        if((m-2*n)<0)
            cout<<m<<" "<<m<<"\n";
        else
        {
            ll diff=m-(m/n)*n;
            for(int i=n;i<=n+diff;i++)
            {
                if((((m/i)*i)-i)>=mx)
                {
                    N=i;
                    M=(m/i)*i;
                    mx=M-N;
                }
            }
            cout<<N<<" "<<M<<"\n";
        }
    }
    return 0;
}