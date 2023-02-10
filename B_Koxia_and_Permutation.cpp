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
        ll a[n],x=1,y=n,f=0;
        for(int i=0;i<n;i++){
            if(f==0){
                a[i]=y;
                y--;
                f=1;
            }else{
                a[i]=x;
                x++;
                f=0;
            }
            if(x>y) break;
        }
        
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}