#include<bits/stdc++.h>
using namespace std;
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    // fast
    ll n;
    cin>>n;
    ll x,y,usum=0,lsum=0,flips=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        usum+=x;
        lsum+=y;
        if((x%2==0) != (y%2==0))
        {
            flips++;
        }
    }
    if(((lsum%2==0)&&(usum%2==1))||((lsum%2==1)&&(usum%2==0)))
    {
    // cout<<"*";
        
            cout<<-1;
    }
    else if(((lsum%2)==1) && ((usum%2)==1))
    {
        if(flips>=1 && n>1)
            cout<<1;
        else
            cout<<-1;
    }
    else
        cout<<0;
    return 0;
}