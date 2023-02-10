#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll ans=min(((n/m)*b)+min((n%m)*a,b),a*n);
    
    cout<<ans<<'\n';
    return 0;
}