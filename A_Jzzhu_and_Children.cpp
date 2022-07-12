#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m,id;
    float x,mx;
    cin>>n>>m;
    cin>>mx;
    mx=ceil(mx/m);
    id=1;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(ceil(x/m)>=mx)
        {
            mx=ceil(x/m);
            id=i+1;
        }
    }
    cout<<id;
    return 0;
}