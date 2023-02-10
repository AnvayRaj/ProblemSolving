#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,a,b;
    cin>>n;
    int x[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x[i]=a;
        m[b]++;
    }
    int count=0;
    for(int i=0;i<n;i++){
        count+=m[x[i]];
    }
    cout<<count<<'\n';
    return 0;
}