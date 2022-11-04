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
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i]; 
        }
        int m=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<m){
                m=a[i];
            }
        }
        if(a[0]==m){
            cout<<"Bob\n";
        }else{
            cout<<"Alice\n";
        }
    }
    return 0;
}