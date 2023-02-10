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
        if(n&1){
            for(int i=0;i<n;i++){
                cout<<7<<" ";
            }
            cout<<'\n';
        }else{
            for(int i=0;i<n-2;i++){
                cout<<4<<" ";
            }
            cout<<2<<" "<<6<<"\n";
        }
    }
    return 0;
}