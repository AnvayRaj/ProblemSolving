#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m;
    cin>>n>>m;
    ll a[m],b[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+m);
    sort(b,b+m);
    ll mx=0,mi=0,k=n;
    ll i=0,j=m-1;
    while(n>0)
    {
        if(a[i]>0)
        {
            mi+=a[i];
            a[i]--;
            n--;
        }
        else
        {
            i++;
        }
    }
    while(k>0)
    {
        mx+=b[m-1];
        b[m-1]--;
        k--;
        sort(b,b+m);
    }
    cout<<mx<<" "<<mi;
    return 0;
}