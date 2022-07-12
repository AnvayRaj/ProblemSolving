#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,c100=0,c200=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==100)
            c100++;
        else
            c200++;
    }
    ll avg=(c100*100+c200*200)/2;
    if(avg%100==0)
    {
        avg/=100;
        if(avg%2==0)
            cout<<"YES\n";
        else if(c100>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
    return 0;
}