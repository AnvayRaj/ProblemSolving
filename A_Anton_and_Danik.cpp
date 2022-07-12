#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int n,a=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            b++;
    }
    if(a>b)
        cout<<"Anton\n";
    if(a<b)
        cout<<"Danik\n";
    if(a==b)
        cout<<"Friendship\n";
    return 0;
}