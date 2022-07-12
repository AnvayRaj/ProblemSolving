#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,k;
    cin>>n>>k;
    multimap<int,int,greater<int>> m;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        m.insert(pair<int,int>(x,y));
    }
    int lastx=-1,lasty=-1,position=1,flag=0,count=1;
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->first==lastx && i->second==lasty && position==k)
        {
            lastx=i->first;
            lasty=i->second;
            flag=1;
            count++;
        }
        else
        {
            position++;
            lastx=i->first;
            lasty=i->second;
        }
        if(flag)
        {
            position!=k;
            break;
        }
    }
    cout<<count;
    return 0;
}