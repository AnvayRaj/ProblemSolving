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
        int n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        
        for(int i=0;i<m;i++){
            sort(a,a+n);
            a[0]=b[i];
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}