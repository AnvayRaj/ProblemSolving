#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,x1=1,x2=0;
    string x,r,nr;
    cin>>n;
    cin>>x;
    r=x;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(x==r)
            x1++;
        else
        {
            nr=x;
            x2++;
        }
    }
    if(x1>x2)
        cout<<r;
    else
        cout<<nr;
    return 0;
}