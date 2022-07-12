#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i==0)
        {
            if(isupper(s[i]))
                cout<<s[i];
            else
                cout<<char(s[i]-32);
        }
        else
            cout<<s[i];
    }
    return 0;
}