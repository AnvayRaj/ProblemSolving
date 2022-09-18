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
        int n;
        cin>>n;
        int s[n];
        string v;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        cin>>v;
        int a=100;
        for(int i=0;i<n;i++)
        {
            if(s[i]<a && v[i]=='0')
                a=s[i];
        }
        cout<<a<<"\n";
    }
    return 0;
}