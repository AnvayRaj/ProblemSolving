#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s;
    cin>>s;
    ll count=1,flag=1;
    char c=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==c)
        {
            count++;
            if(count==7)
            {
                cout<<"YES\n";
                flag=0;
                break;
            }
        }
        else
        {
            c=s[i];
            count=1;
        }

    }
    if(flag)
        cout<<"NO\n";
    
    return 0;
}