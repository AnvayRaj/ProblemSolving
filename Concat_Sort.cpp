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
        ll n;
        cin>>n;
        ll a[n],b[n],flag=1;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll x=0,y=n-1,count=0,lim;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[x])
            {
                x++;
            }
            else
            {
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==b[x])
            {
                x++;
            }
        }
        if(x==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}