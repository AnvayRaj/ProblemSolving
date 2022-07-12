#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,x,m=INT_MAX,mc=0,mi;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<m)
        {
            m=x;
            mi=i+1;
            mc=1;
        }
        else if(x==m)
        {
            mc++;
        }
    }
    if(mc==1)
    {
        cout<<mi;
    }
    else
        cout<<"Still Rozdil";
    return 0;
}