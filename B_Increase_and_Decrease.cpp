#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    ll a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if(sum==n*(sum/n))
        cout<<n;
    else
    {
        cout<<n-1;
    }
    return 0;
}