#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,x;
    cin>>n;
    map<int,vector<int>> m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x].push_back(i);
    }
    vector<pair<int,int>> v;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second.size()==1)
            v.push_back(make_pair(i->first,0));
        else
        {
            ll d=i->second[0]-i->second[1];
            ll flag=1;
            for(int j=1;j<i->second.size()-1;j++)
            {
                if(i->second[j]-i->second[j+1]!=d)
                {
                    flag=0;
                }
            }
            if(flag)
                v.push_back(make_pair(i->first,-d));
        }
    }
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    return 0;
}