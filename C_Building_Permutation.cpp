#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll count=0;
    for(int i=0;i<n;i++)
    {
        count+=(abs(a[i]-(i+1)));
    }
    cout<<count;
    return 0;
}