#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
    return 0;
}