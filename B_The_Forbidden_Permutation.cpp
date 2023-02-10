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
        int n,m,d;
        cin>>n>>m>>d;
        int in,a[m];
        unordered_map<int,int> p;
        for(int i=0;i<n;i++){
            cin>>in;
            p[in]=i;
        }
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        ll mvs=0;
        for(int i=0;i<n-1;i++){



            ///////////////////////////////////////////////
            if(p[a[i]]<p[a[i+1]] && p[a[i+1]]<=p[a[i]]+d){
                if(p[a[i]]>d+1){
                    mvs+=p[a[i+1]]-p[a[i]];
                    for(auto x:p){
                        if(x.second<p[a[i+1]] && x.second>p[a[i]]){
                            x.second+=2;
                        }
                    }
                    p[a[i+1]]=p[a[i]];
                    p[a[i]]++;
                }else{
                    mvs+=d+1+p[a[i]]-p[a[i+1]];
                    
                }
                
            }
        }
        cout<<mvs<<'\n';
    }
    return 0;
}