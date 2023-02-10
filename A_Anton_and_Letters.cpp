#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s;
    getline(cin,s);
    set<char> c;
    for(int i=1;i<s.size();i++){
        if(s[i]=='}'){
            if(s[i-1]!='{'){
                c.insert(s[i-1]);
            }
        }
        if(s[i]==','){
            c.insert(s[i-1]);
        }
    }
    cout<<c.size()<<'\n';
    return 0;
}