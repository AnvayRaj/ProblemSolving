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
        int m,s;
        cin>>m>>s;
        int a[m];
        ll sm=0,mx=-1;
        for(int i=0;i<m;i++){
            cin>>a[i];
            sm+=a[i];
            if(a[i]>mx){
                mx=a[i];
            }
        }
        ll z=(mx*(mx+1))/2;
        ll k=0;
        if(z>sm){
            k=z-sm;
        }
        s-=k;
        if(s<0){
            cout<<"NO\n";
        }else if(s==0){
            cout<<"YES\n";
        }else{
            int flag=0;
            for(int i=mx+1;i<1000;i++){
                s-=i;
                if(s==0){
                    flag=1;
                    break;
                }else if(s<0){
                    break;
                }
            }
            if(flag){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}