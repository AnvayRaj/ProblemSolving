#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
bool isPerfect(ll x)
{
    long long z=sqrt(x);
    return ((z*z)==x);
}
int main(){
    fast
    ll n,count=0;
    cin>>n;

    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<=n;b++)
        {
            ll c=a*a+b*b;
            if((isPerfect(c)) && (c<=n*n))
                count++;
        }
    }
    cout<<count;
    return 0;
}