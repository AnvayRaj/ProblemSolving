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
        ll l,r,x;
        cin>>l>>r>>x;
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<'\n';
        }else{
            if(b>a && b<=r){
                if(abs(a-b)>=x){
                    cout<<1<<'\n';
                }else if(abs(a-l)>=x){
                    cout<<2<<'\n';
                }else if(abs(a-r)>=x){
                    if(abs(b-r)>=x){
                        cout<<2<<'\n';
                    }else if(abs(b-l)>=x){
                        cout<<3<<'\n';
                    }else{
                        cout<<-1<<'\n';
                    }
                }else{
                    cout<<-1<<'\n';
                }
            }else if(b<a && b>=l){
                if(abs(a-b)>=x){
                    cout<<1<<'\n';
                }else if(abs(a-r)>=x){//
                    cout<<2<<'\n';
                }else if(abs(a-l)>=x){
                    if(abs(b-l)>=x){
                        cout<<2<<'\n';
                    }else if(abs(b-r)>=x){//
                        cout<<3<<'\n';
                    }else{
                        cout<<-1<<'\n';
                    }
                }else{
                    cout<<-1<<'\n';
                }
            }else{
                cout<<-1<<'\n';
            }
        }
        // cout<<a<<" "<<b<<'\n';

    }
    return 0;
}