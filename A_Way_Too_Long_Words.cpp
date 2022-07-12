#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.size()<=10)
            cout<<s<<"\n";
        else
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
        }
    }
    return 0;
}