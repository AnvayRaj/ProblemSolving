#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll k,n,w;
    cin>>k>>n>>w;
    ll cost=(w*(w+1)/2)*k;
    if(n>=cost)
        cout<<0;
    else
        cout<<cost-n;
    return 0;
}