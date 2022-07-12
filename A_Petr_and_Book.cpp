#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,x[7],sum=0,l;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    while(n>0)
    {
        for(int i=0;i<7;i++)
        {
            n-=x[i];
            if(n<=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}