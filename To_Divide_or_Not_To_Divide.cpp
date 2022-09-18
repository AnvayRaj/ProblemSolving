#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}
int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        if(a==b || (a>b && a%b==0))
            cout<<-1<<"\n";
        else
        {
            ll bg=(n/b)*b;
            if(bg<n)
            {
                bg=(n/b+1)*b;
            }
            ll ag=(n/a)*a;
            if(ag<n)
            {
                ag=(n/a+1)*a;
            }
            ll m=(n/lcm(a,b))*lcm(a,b);
            if(m<n)
            {
                m=(n/lcm(a,b)+1)*lcm(a,b);
            }
            if(ag!=m)
                cout<<ag<<"\n";
            else
                cout<<ag+a<<"\n";
        }
    }
    return 0;
}