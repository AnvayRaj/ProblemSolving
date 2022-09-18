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
        ll n,c=0;
        ll s=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c++;
            if(a[i]==0)
            {
                s+=((c*(c+1))/2);
                c=0;
            }
            if(i==(n-1) && a[i]==1)
            {
                s+=((c*(c+1))/2);
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}