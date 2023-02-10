#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    int a[n]={0},x,y;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>y;
        a[y-1]=1;
    }
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>y;
        a[y-1]=1;
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            // cout<<i;
            flag=1;
        }
    }
    if(flag) cout<<"Oh, my keyboard!\n";
    else cout<<"I become the guy.\n";
    return 0;
}