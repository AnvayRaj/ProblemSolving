#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll m,n;
    cin>>m>>n;
    if(m<n)
    {
        m=m+n;
        n=m-n;
        m=m-n;
    }
    if(m%2==0)
    {
        cout<<(m/2)*n;
    }
    if(m%2!=0)
    {
        cout<<((m/2)*n)+n/2;
    }
    return 0;
}