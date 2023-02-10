#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        string ans="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        int z=0;
        if(s[0]=='Y'){
            z=0;
        }
        else if(s[0]=='e'){
            z=1;
        }
        else if(s[0]=='s'){
            z=2;
        }
        int flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=ans[z+i]){
                flag=1;
            }
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    
    }
    return 0;
}