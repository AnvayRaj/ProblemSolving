#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string a,b;
    cin>>a;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    if(a>b)
    {
        cout<<1;
    }
    else if(a<b)
    {
        cout<<-1;
    }
    else
        cout<<0;
    return 0;
}