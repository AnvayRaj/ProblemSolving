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
        ll pwr=0,h=0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                pq.push(a[i]);
            }else{
                if(!pq.empty()){
                    pwr+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<pwr<<'\n';
    }
    return 0;
}