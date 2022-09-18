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
        int a[n];
        cin>>a[0];
        int ft=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            ft = __gcd(ft,a[i]);
        }
        ll f1=ft,f2=n;
        ll ans=f1*f2;
        cout<<ans<<"\n";
    }
    return 0;
}