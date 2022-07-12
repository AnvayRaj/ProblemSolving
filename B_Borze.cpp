#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s;
    cin>>s;
    int pos=0;
    while(pos<s.size())
    {
        if(s[pos]=='-' && s[pos+1]=='.')
        {
            cout<<1;
            pos+=2;
        }
        else if(s[pos]=='-' && s[pos+1]=='-')
        {
            cout<<2;
            pos+=2;
        }
        else
        {
            cout<<0;
            pos++;
        }
    }
    return 0;
}