#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    int a[n],x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
    return 0;
}