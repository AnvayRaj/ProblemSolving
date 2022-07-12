#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll s,n,x,y,flag=1;
    multimap<int,int> m;
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        m.insert(pair<int,int>(x,y));
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        // cout<<(i->first)<<" ";
        if(s>(i->first))
        {
            s+=(i->second);
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}