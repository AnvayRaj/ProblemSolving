#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll k;
    cin>>k;
    ll a[12],sum=0;
    for(int i=0;i<12;i++)
        cin>>a[i];
    sort(a,a+12,greater<int>());
    for(int i=0;i<12;i++)
    {
        sum+=a[i];
        if(k==0)
        {
            cout<<0;
            break;
        }
        if(sum>=k)
        {
            cout<<i+1;
            break;
        }
        if(i==11)
        {
            cout<<-1;
            break;
        }
    }

    return 0;
}