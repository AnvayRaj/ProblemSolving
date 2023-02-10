#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll a,b,c;
    cin>>a>>b>>c;
    ll x[6];
    x[0]=a+b+c;
    x[1]=a+b*c;
    x[2]=(a+b)*c;
    x[3]=a*b+c;
    x[4]=a*(b+c);
    x[5]=a*b*c;
    ll ans=0;
    for(int i:x){
        if(i>ans) ans=i;
    }
    cout<<ans<<'\n';
    return 0;
}