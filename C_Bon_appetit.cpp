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
        int n,m;
        cin>>n>>m;
        int a[n],c[m];
        map<int,int> poll;
        for(int i=0;i<n;i++){
            cin>>a[i];
            poll[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        sort(c,c+m,greater<int>());
        ll sm=0;
        multimap<int,int,greater<int>> sec;
        for(int i=0;i<m;i++){
            for(auto j:poll){
                sec.insert({j.second, j.first});
            }
            if(sec.begin()->first>c[i]){
                sm+=c[i];
                poll[sec.begin()->second]-=c[i];
                // cout<<"update "<<sec.begin()->second<<' '<<poll[sec.begin()->second]<<'\n';
            }else{
                sm+=sec.begin()->first;
                poll.erase(sec.begin()->second);
            }
            sec.clear();
        }
        cout<<sm<<'\n';
    }
    return 0;
}