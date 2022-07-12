#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m;
    cin>>n>>m;
    ll sum=0,x,a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]<0 && m>0)
        {
            sum+=abs(a[i]);
            m--;
        }
    }
    cout<<sum;
    return 0;
}