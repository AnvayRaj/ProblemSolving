#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int main(){
    fast
    int n,k;
    cin>>n>>k;
    ll a[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int z=0;z<k;z++)
    {
        for(int i=0;i<n;i++)
        {
            a[i]=(((a[i])%998244353)+((a[(p[i]-1)])%998244353))%998244353;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}