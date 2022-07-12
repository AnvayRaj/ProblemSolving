#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s;
    cin>>s;
    map<int,int> m;
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
    int ec=0,oc=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((i->second)%2==0)
            ec++;
        else
            oc++;
    }
    if(oc==1 || oc==0)
        cout<<"First\n";
    else
    {
        if(oc%2==0)
            cout<<"Second\n";
        else
            cout<<"First\n";
    }
    return 0;
}