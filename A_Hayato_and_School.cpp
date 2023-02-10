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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> even,odd;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even.push_back(i+1);
            }else{
                odd.push_back(i+1);
            }
        }
        if(odd.size()>=3){
            cout<<"YES\n";
            cout<<odd[0]<<' '<<odd[1]<<' '<<odd[2]<<'\n';
        }else if(odd.size()>=1 && even.size()>=2){
            cout<<"YES\n";
            cout<<odd[0]<<' '<<even[0]<<' '<<even[1]<<'\n';
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}