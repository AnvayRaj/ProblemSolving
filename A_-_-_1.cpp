#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll P,K;
    cin>>P>>K;
    ll a[P],k=0;
    for(int i=0;i<P;i++){
        cin>>a[i];
        if(a[i]==K){
            k=i+1;
        }
    }
    cout<<k<<'\n';
    return 0;
}