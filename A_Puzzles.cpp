#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m,mi;
    cin>>n>>m;
    ll a[m];

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    mi=a[m-1];
    for(int i=0;i<m-n+1;i++)
    {
        if((a[i+n-1]-a[i])<mi)
            mi=(a[i+n-1]-a[i]);
    }
    cout<<mi;
    return 0;
}