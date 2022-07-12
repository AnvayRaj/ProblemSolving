#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,mx=0,mi=1000000000;
    cin>>n;
    ll x;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>mx)
            mx=x;
        if(x<mi)
            mi=x;
        if(m.find(x)!=m.end())
            m[x]++;
        else
            m[x]=1;
    }
    ll d=mx-mi,count=0;
    if(m.size()==1)
        cout<<d<<" "<<(m.begin()->second)*((m.begin()->second)-1)/2;
    else
    {
    for(auto i=m.begin(),j=m.begin();j!=m.end();j++)
    {
        if(((j->first)-(i->first))==d)
        {
            count+=(i->second)*(j->second);
            i=j;
        }
    }
    cout<<d<<" "<<count;
    }
    return 0;
}