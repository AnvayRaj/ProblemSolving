#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll a,b;
    cin>>a>>b;
    ll years=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        years++;
    }
    cout<<years;
    return 0;
}