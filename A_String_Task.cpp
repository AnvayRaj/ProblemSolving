#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s,r="AaYyEeIiOoUu";
    int flag;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.size();i++)
    {
        flag=1;
        for(int j=0;j<r.size();j++)
        {
            if(s[i]==r[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<".";
            if(isupper(s[i]))
            {
                cout<<tolower(s[i]);
                cout<<"*";
            }
            else
                cout<<s[i];
        }
    }
    return 0;
}