#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    long long int n,x=0,y=0,z;
    cin>>n;
    long long int a;
    unordered_map<int,int> l;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        l[a]=i;
    }
    int m;
    cin>>m;
    int b;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        x+=l[b]+1;
        y+=(n-(l[b]));
    }
    cout<<x<<" "<<y;
    
    return 0;
}