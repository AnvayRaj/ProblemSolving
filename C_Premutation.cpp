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
        int a[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>a[i][j];
            }
        }
        vector<int> miss,b;
        for(int i=0;i<n-1;i++){
            b.push_back(a[0][i]);
        }
        for(int i=0,j=0;i<n || j<n;){
            if(b[i]!=a[0][j]){
                
            }
        }
    }
    return 0;
}