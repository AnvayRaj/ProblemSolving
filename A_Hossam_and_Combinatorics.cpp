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
        int n;
        cin>>n;
        ll a[n];
        ll count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll mx=abs(a[0]-a[n-1]);
        map<ll,ll> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        if(m.size()==1){
            count=m[a[n-1]]*(m[a[n-1]]-1);
        }else{
            count=2*(m[a[n-1]]*m[a[0]]);
        }
        
        cout<<count<<'\n';
    }
    return 0;
}