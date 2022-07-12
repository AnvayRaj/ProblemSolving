#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,x=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='-' || s[1]=='-')
            x--;
        if(s[0]=='+' || s[1]=='+')
            x++;
    }
    cout<<x;
    return 0;
}