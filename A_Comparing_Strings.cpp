#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string g1,g2;
    cin>>g1;
    cin>>g2;
    vector<char> v;
    if(g1.size()!=g2.size())
        cout<<"NO\n";
    else{
        for(int i=0;i<g1.size();i++)
        {
            if(g1[i]!=g2[i])
            {
                v.push_back(g1[i]);
                v.push_back(g2[i]);
            }
        }
        if(v.size()!=4)
            cout<<"NO\n";
        else
        {
            sort(v.begin(),v.end());
            if(v[0]==v[1] && v[2]==v[3])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}