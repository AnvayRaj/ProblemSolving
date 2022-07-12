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
        ll x,y;
        cin>>x>>y;
        x-=1;
        x/=10;
        y-=1;
        y/=10;
        cout<<abs(y-x)<<"\n";
    }
    return 0;
}