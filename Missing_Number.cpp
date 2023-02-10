#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    int set1,x;
    int set2=1;
    cin>>set1;
    for(int i=1;i<n-1;i++){
        cin>>x;
        set1^=x;
    }
    for(int i=1;i<n;i++){
        set2^=(i+1);
    }
    cout<<(set1^set2)<<'\n';
    return 0;
}