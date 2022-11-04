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
        int n;
        cin>>n;
        int a[n];
        ll sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                sum1+=a[i];
            }
            else{
                sum2+=a[i];
            }
        }
        cout<<max(sum1-abs(sum2),abs(sum2)-sum1)<<'\n';
    }
    return 0;
}