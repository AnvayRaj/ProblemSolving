#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"Yes\n";
        }else if(n-a-b>=2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}