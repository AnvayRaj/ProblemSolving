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
        ll n,mi,x=INT_MAX;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<x)
            {
                x=a[i];
                mi=i;
            }
        }
        if(n%2!=0)
        {
            cout<<"Mike\n";
        }
        else{
            if(mi%2==0)
            {
                cout<<"Joe\n";
            }
            else
                cout<<"Mike\n";
        }
    }
    return 0;
}