#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 ||i%l==0 ||i%m==0 ||i%n==0)
            count++;
    }
    cout<<count;
    return 0;
}