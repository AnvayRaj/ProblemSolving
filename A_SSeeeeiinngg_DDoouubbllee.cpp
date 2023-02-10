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
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        for(int i=n-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<'\n';
    }
    return 0;
}