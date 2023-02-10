#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int a[n];
        a[0]=s-r;
        ll left=r;
        int count=1;
        for(int i=1;i<n;i++){
            a[i]=count;
            left--;
            if(i==n-1){
                count++;
                i=0;
            }
            if(left==0){
                break;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}