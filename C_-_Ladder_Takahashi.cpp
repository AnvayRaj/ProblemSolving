#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n;
    cin>>n;
    unordered_map<int,set<int>> m;
    unordered_map<int,bool> visited;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        m[x].insert(y);
        m[y].insert(x);
    }
    for(auto i:m){
        visited[i.first]=false;
    }
    queue<int> z;
    z.push(1);
    visited[1]=true;
    while(!z.empty()){
        x=z.front();
        z.pop();
        for(auto i:m[x]){
            if(!visited[i]){
                z.push(i);
                visited[i]=true;
            }
        }
    }
    int mx=1;
    for(auto i:visited){
        if((i.first>mx) && (i.second)){
            mx=i.first;
        }
    }
    cout<<mx<<'\n';
    return 0;
}