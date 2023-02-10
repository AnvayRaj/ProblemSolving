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
        string a,check="3141592653589793238462643383279";
        cin>>a;
        int flag=0,i;
        for(i=0;i<a.size();i++){
            if(a[i]!=check[i]){
                cout<<i<<'\n';
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<'\n';
        }
    }
    return 0;
}