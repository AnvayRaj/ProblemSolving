#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,k;
    cin>>n>>k;
    ll a[n],c=0,flag=1,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(k-1==i)
        {
            c=a[i];
            count=i;
        }
        else if(c)
        {
            if(a[i]!=c)
                flag=0;
        }
    }
    if(flag)
    {
        for(int i=count;i>=0;i--)
        {
            if(a[i]!=c)
            {
                count=i+1;
                break;
            }
            else
                count=i;
        }
        cout<<count;
    }
    else
        cout<<-1;
    return 0;
}