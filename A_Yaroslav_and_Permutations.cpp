#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,x,flag=1;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(m.find(x)!=m.end())
            m[x]++;
        else
            m[x]=1;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((i->second)>(n/2) && n%2==0)
            flag=0;
        else if((i->second)>(n/2)+1)
            flag=0;
    }
    if(flag || n==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}