#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s;
    cin>>s;
    set<char> v;
    for(int i=0;i<s.size();i++)
        v.insert(s[i]);
    int n=v.size();
    if(n%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
    return 0;
}