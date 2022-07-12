#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,m,x;
    cin>>n>>m;
    if(n>m)
    {
        x=0;
        for(int i=0;i<n+m;i++)
        {
            if(i%2==0)
                cout<<"B";
            if(i%2!=0 && x<m)
            {
                cout<<"G";
                x++;
            }
            else if(i%2!=0)
                cout<<"B";
        }
    }
    else
    {
        x=0;
        for(int i=0;i<m+n;i++)
        {
            if(i%2==0)
                cout<<"G";
            if(i%2!=0 && x<n)
            {
                cout<<"B";
                x++;
            }
            else if(i%2!=0)
                cout<<"G";
        }
    }
    return 0;
}