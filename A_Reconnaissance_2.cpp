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
    ll x,y,m=1001;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[i-1])<m)
        {
            m=abs(a[i]-a[i-1]);
            x=i-1;
            y=i;
        }
    }
    if(abs(a[n-1]-a[0])<m)
        {
            m=abs(a[n-1]-a[0]);
            x=n-1;
            y=0;
        }
    cout<<x+1<<" "<<y+1;
    return 0;
}