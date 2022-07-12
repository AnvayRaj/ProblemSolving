#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s;
    ll flag=1,f=1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && f==1)
        {
            i+=2;
            if(i!=0 && flag)
            {
                cout<<" ";
                flag=0;
            }
            if(i==s.size()-3)
                f=0;
        }
        else
        {
            cout<<s[i];
            flag=1;
        }
    }
    return 0;
}