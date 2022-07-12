#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,m,x,c=0,count=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        if(x-1>c)
        {
            count+=(x-c-1);
            c=x-1;
        }
        if(x-1<c)
        {
            count+=(n-c-1)+x;
            c=x-1;
        }
    }
    cout<<count;
    return 0;
}