#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m,count=0;
    cin>>n>>m;
    ll a=0,b=0;
    for(int i=0;i<1000;i++)
    {
        b=0;
        for(int i=0;i<1000;i++)
        {
            if((a*a+b)==n && (a+b*b)==m)
                count++;
            b++;
        }
        a++;
    }
    cout<<count;
    return 0;
}