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
        ll a,b,c;
        cin>>a>>b>>c;
        ll reqmod=a%b;
        ll shift=0;
        if(c%b>reqmod)
        {
            a=c+b+(reqmod-(c%b));
        }
        else
        {
            a=c-(c%b)+reqmod;
        }
        // while(a<=c)
        // {
        //     a+=b;
        // }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}