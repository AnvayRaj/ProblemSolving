#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=sqrt(a*c/b);
    ll y=sqrt(a*b/c);
    ll z=sqrt(b*c/a);
    cout<<(x+y+z)*4;
    return 0;
}