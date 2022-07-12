#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,k,flag=0;
    cin>>n>>k;
    ll a[n];
    ll score=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i+1==k)
        {
            score=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=score && a[i]>0)
            count++;
    }
    cout<<count;
    return 0;
}