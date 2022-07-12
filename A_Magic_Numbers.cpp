#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    int flag=1;
    string s;
    cin>>s;
    if(s[0]!='1')
        cout<<"NO\n";
    else if(s.size()<=2)
    {
        if(s=="1" || s=="14" || s=="11")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        for(int i=0;i<s.size()-2;i++)
        {
            if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
            {
                flag=0;
                break;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='1' && s[i]!='4')
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}