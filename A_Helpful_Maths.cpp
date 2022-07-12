#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
            continue;
        else
        {
            v.push_back(int(s[i])-48);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
            cout<<v[i];
        else
            cout<<v[i]<<"+";
    }
    return 0;
}