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
        ll n,x;
        cin>>n>>x;
        if(x==n){
            cout<<x<<" ";
            for(int i=2;i<n;i++){
                cout<<i<<" ";
            }
            cout<<1<<'\n';
        }else{
            ll a[n];
            a[0]=x;
            a[n-1]=1;
            int i,curr=x;
            set<int> s;
            for(i=2;i<=n-1;i++){
                if(i%x==0){
                    a[curr-1]=i;
                    curr=i;
                    x=i;
                }else{
                    a[i-1]=i;
                }
            }
            int permit=0;
            for(int i=0;i<n;i++){
                s.insert(a[i]);
            }
            for(int i=1;i<=n;i++){
                if(s.find(i)==s.end()){
                    permit=1;
                }
            }
            if(permit) cout<<-1<<'\n';
            else{
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<'\n';
            }
        }
    }
    return 0;
}