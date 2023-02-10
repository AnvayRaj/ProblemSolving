#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m;
    cin>>n>>m;
    n=min(n,m);
    if(n&1){
        cout<<"Akshat\n";
    }else{
        cout<<"Malvika\n";
    }
    return 0;
}