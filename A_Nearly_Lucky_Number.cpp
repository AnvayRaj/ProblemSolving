#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    long long int n,count=0;
    int x;
    cin>>n;
    while(n>0)
    {
        x=n%10;
        if(x==4 || x==7)
            count++;
        n/=10;
    }
    if(count==4 || count==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}