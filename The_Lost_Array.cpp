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
        ll x,y,n;
        cin>>x>>y>>n;
        if(x==y)
            cout<<0<<"\n";
        else if(y>x)
        {
            cout<<y-x<<"\n";
        }
        else
        {
            if(y%2==0)
                cout<<(x-y)/2<<"\n";
            else
                cout<<((x-y+1)/2)+1<<"\n";
        }
    }
    return 0;
}