#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        float n,k;
        cin>>n>>k;
        cout<<(ceil(n/5))-(ceil(k/5))<<"\n";
    }
    return 0;
}