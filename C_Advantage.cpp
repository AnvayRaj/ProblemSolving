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
        ll a[n],b[n];
        ll mx=0,sm=0,mi=0,flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
            if(i!=0){
                if(a[i]!=a[i-1]){
                    flag=1;
                }
            }
        }
        sort(a,a+n);
        if(flag){
            for(int i=0;i<n;i++){
                if(b[i]!=a[n-1]){
                    cout<<b[i]-a[n-1]<<" ";
                }else{
                    cout<<a[n-1]-a[n-2]<<" ";
                }
            }
        }else{
            for(int i=0;i<n;i++){
                cout<<0<<" ";
            }
        }
        
        cout<<'\n';

    }
    return 0;
}