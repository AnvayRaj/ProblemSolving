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
        int n,x;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }
        if(n==1){
            cout<<1<<'\n';
        }else if(n==2){
            if(a[0]!=a[1]){
                cout<<2<<'\n';
            }else{
                cout<<1<<'\n';
            }
        }else{
            map<int,int> m;
            for(auto i:a){
                m[i]++;
            }
            if(m.size()==1){
                cout<<1<<'\n';
            }else if(m.size()>=3){
                cout<<n<<'\n';
            }else{
                cout<<(n/2)+1<<'\n';
            }
        }
    }
    return 0;
}