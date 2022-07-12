#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,x,c0=0,c5=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==5)
            c5++;
        else
            c0++;
    }
    x=c5%9;
    c5-=x;
    if(c0>0 && c5>0)
    {
        for(int i=0;i<c5;i++)
        {
            cout<<5;
        }
        for(int i=0;i<c0;i++)
        {
            cout<<0;
        }   
    }
    else if(c0>0)
    {
        cout<<0;
    }
    else
        cout<<-1;
    return 0;
}