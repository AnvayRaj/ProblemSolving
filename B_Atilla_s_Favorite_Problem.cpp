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
        string s;
        cin>>s;
        int m=0;
        for(int i=0;i<n;i++){
            if(s[i]-96>m){
                m=s[i]-96;
            }
        }
        cout<<m<<'\n';
    }
    return 0;
}