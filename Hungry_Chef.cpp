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
        ll x,y,n,r;
        cin>>x>>y>>n>>r;
        ll nb,pb=n,flag=1;
        if(n*x>r)
            cout<<-1<<"\n";
        else
        {
            pb=ceil(((r-n*x))/((y-x)));
            if(pb>n)
                pb=n;
            cout<<(n-pb)<<" "<<pb<<"\n";
        }
    }
    return 0;
}