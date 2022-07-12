#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s1,s2;
    cin>>s1;
    cin>>s2;
    reverse(s1.begin(),s1.end());
    if(s1==s2)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}