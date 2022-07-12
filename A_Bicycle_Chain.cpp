#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll m,mg=0,mgc=0;
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((b[j]%a[i]==0) && (b[j]/a[i]>mg))
            {
                mg=b[j]/a[i];
                mgc=1;
            }
            else if((b[j]%a[i]==0) && (b[j]/a[i]==mg))
            {
                mgc++;
            }
        }
    }
    cout<<mgc;
    return 0;
}