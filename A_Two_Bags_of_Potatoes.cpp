#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll y,k,n;
    cin>>y>>k>>n;
    vector<int> v;
    if((y+(k-(y%k)))<=n && k-(y%k)>=1)
    {
        ll x=k-(y%k);
        for(int i=x;i<=n-y;i+=k)
            cout<<i<<" ";
    }
    else
        cout<<-1;
    return 0;
}