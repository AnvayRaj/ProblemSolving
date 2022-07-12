#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b,b+m);
    if(2*a[0]>=b[0] || a[n-1]>=b[0])
    {
        cout<<-1;
    }
    else
    {
        cout<<max(a[n-1],2*a[0]);
    }
    return 0;
}