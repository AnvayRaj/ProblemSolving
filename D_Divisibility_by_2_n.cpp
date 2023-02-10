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
        ll n;
        cin>>n;
        ll a[n],count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            while(a[i]%2==0){
                a[i]/=2;
                count++;
            }
        }
        if
    }
    return 0;
}