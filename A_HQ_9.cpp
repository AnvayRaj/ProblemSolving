#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s;
    int flag=1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='H' || s[i]=='Q' || s[i]=='9')&& flag)
        {
            cout<<"YES\n";
            flag=0;
        }    
    }
    if(flag)
        cout<<"NO\n";
    return 0;
}