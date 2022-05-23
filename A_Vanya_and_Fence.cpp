#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,h,x,w=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=h)
            w+=1;
        else
            w+=2;
    }
    cout<<w<<"\n";
    return 0;
}