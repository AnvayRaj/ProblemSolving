#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    a=a.append(b);
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
