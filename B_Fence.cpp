#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,k,x;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll b[n-k+1]={0},min,m=1;
    for(int i=0;i<k;i++)
        b[0]+=a[i];
    min=b[0];
    for(int i=0,j=k;j<n;j++,i++)
    {
        b[i+1]=b[i]-a[i]+a[j];
        if(b[i+1]<min)
        {
            min=b[i+1];
            m=i+2;
        }
    }
    cout<<m;
    return 0;
}