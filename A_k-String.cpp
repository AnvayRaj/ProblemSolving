#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll k,flag=1;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            m[s[i]]++;
        }
        else
        {
            m[s[i]]=1;
        }
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((i->second)%k!=0)
        {
            cout<<-1<<"\n";
            flag=0;
            break;
        }
    }
    if(flag)
    {
        for(int j=0;j<k;j++)
        {
            for(auto i=m.begin();i!=m.end();i++)
            {
                for(int z=0;z<(i->second)/k;z++)
                    cout<<i->first;
            }
        }
    }
    return 0;
}