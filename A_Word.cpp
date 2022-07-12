#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
        string s;
        int u=0,l=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
                u++;
            else
                l++;
        }
        if(u>l)
        {
            for(int i=0;i<s.size();i++)
            {
                if(isupper(s[i]))
                    cout<<char(s[i]);
                else
                    cout<<char(s[i]-32);
            }
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(isupper(s[i]))
                    cout<<char(s[i]+32);
                else
                    cout<<char(s[i]);
            }
        }
    return 0;
}