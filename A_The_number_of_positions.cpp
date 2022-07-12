#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,a,b;
    cin>>n>>a>>b;
    cout<<min(b+1,b-(b-(n-a)))<<"\n";
    return 0;
}