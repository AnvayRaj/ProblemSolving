#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int

ll ans = 0;

void solve(string &s, int i){
    if(i==s.size()){
        ans=(ans+1)%998244353;
    }
    else if(s[i]=='a'){
        solve(s,i+1);
        if(s.size()>1 && s[i+1]=='b'){
            solve(s,i+2);
        }
    }
    else if(s[i]=='b'){
        solve(s,i+1);
        if(s.size()>1 && s[i+1]=='a'){
            solve(s,i+2);
        }
    }
}

int main() {
    fast
	int T;
	cin>>T;
	while(T--)
	{
	    ans=0;
	    string s;
	    cin>>s;
	    solve(s, 0);
	   
	    cout<<ans<<"\n";
	}
	return 0;
}
