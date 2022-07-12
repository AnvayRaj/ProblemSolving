#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,k,odds,evens;
    cin>>n>>k;
    if(n%2==0)
    {
        odds=n/2;
        evens=n-odds;
        if(k>odds)
        {
            k-=odds;
            cout<<k*2;
        }
        else
        {
            cout<<(2*k)-1;
        }

    }
    else
    {
        odds=(n/2)+1;
        evens=n-odds;
        if(k>odds)
        {
            k-=odds;
            cout<<k*2;
        }
        else
        {
            cout<<(2*k)-1;
        }
    }
    return 0;
}