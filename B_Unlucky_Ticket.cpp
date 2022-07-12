#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    string t;
    cin>>t;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
    {
        a[i]=(int)t[i]-48;
    }
    for(int i=0;i<n;i++)
    {
        b[i]=(int)t[i+n]-48;
    }
    sort(a,a+n);
    sort(b,b+n);
    ll f1=0,f2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
            continue;
        else
        {
            f1=1;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
            continue;
        else
        {
            f2=1;
            break;
        }
    }
    if(f1 && f2)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}