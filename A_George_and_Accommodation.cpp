#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    int n,a,b,c=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b-a >=2)
        c++;
        
    
    }
    cout<<c;
    return 0;
}