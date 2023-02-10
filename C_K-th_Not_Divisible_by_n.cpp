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
        ll n,k;
        cin>>n>>k;
        ll num;
        if(k%(n-1)!=0)
            num=n*(k/(n-1))+(k%(n-1));
        else
            num=n*(k/(n-1))-1;
        cout<<num<<'\n';
    }
    return 0;
}