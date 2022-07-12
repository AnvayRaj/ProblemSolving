#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll w;
    cin>>w;
    if(w>=4 && w%2==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}