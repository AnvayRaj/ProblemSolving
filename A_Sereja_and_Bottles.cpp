#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,a,b;
    cin>>n;
    map<int,int> c,o;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        o[b]=a;
        c[a]++;
    }
    ll count=0;
    for(auto i:c){
        if(o[i.first]==i.first && c[i.first]==1){
            count++;
        }
        if(c[o[i.first]]==0){
            count+=c[i.first];
        }
    }
    cout<<count<<'\n';
    return 0;
}