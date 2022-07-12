#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,l=1000000001,r=0,flag=0,index;
    cin>>n;
    ll a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]<l)
            l=a[i][0];
        if(a[i][1]>r)
            r=a[i][1];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][0]<=l && a[i][1]>=r)
        {
            index=i+1;
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<index;
    else
        cout<<-1;
    return 0;
}