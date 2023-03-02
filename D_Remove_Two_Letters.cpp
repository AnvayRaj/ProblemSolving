#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string> st;
        st.insert(s.substr(2));
        for(int i=1;i<n-1;i++){
            if(st.find(s.substr(0,i)+s.substr(i+2))==st.end()) st.insert(s.substr(0,i)+s.substr(i+2));
        }
        cout<<st.size()<<'\n';
    }
    return 0;
}