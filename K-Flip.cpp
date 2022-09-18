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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int moves=n-k+1;
        // cout<<s<<"*\n";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && i+k-1<n)
            {
                // cout<<"*\n";
                for(int j=i;j<i+k;j++)
                {
                    if(s[j]=='1')
                    {
                        s[j]='0';
                        // cout<<s<<endl;
                    }
                    else
                    {
                        s[j]='1';
                        // cout<<s<<endl;
                    }
                }
                // cout<<"*\n";
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}