#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,x,flag=1;
    cin>>n;
    map<int,vector<int>> m;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        m[x].push_back(i+1);
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        // cout<<i->second.size()<<"\n";
        if(i->second.size()%2!=0)
        {
            cout<<-1;
            flag=0;
            break;
        }      
    }
    if(flag)
    {
        for(auto i=m.begin();i!=m.end();i++)
        {
            for(int j=0;j<i->second.size();j+=2)
            {
                cout<<i->second[j]<<" "<<i->second[j+1]<<"\n";
            }
        }
    }
    return 0;
}