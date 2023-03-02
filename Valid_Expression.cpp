#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int

int main() {
    fast
	int T;
	cin>>T;
	while(T--)
	{
	    ll n,x;
	    cin>>n>>x;
	    ll cur=1;
        bool flag=false;
	    queue<char> q;
	    while(q.size()!=n){
            if(x<=0){
                if(n+1<abs(x)){
                    flag=true;
                    break;
                }
                if(cur-1<x){
                    q.push('*');
                    if(q.size()==n && cur==x){
                        break;
                    }
                }else{
                    q.push('-');
                    cur--;
                    if(q.size()==n && cur==x){
                        break;
                    }
                }
            }else{
                if(n<x-1){
                    flag=true;
                    break;
                }
                if(cur+1>x){
                    q.push('*');
                    if(q.size()==n && cur==x){
                        break;
                    }
                }else{
                    q.push('+');
                    cur++;
                    if(q.size()==n && cur==x){
                        break;
                    }
                }
                
            }
        }
	    if(flag){
	        cout<<-1<<'\n';
        }else if(cur!=x){
	        cout<<-1<<'\n';
	    }else{
	        string ans="";
	        while(!q.empty()){
	            ans+=q.front();
	            q.pop();
	        }
	        cout<<ans<<'\n';
	    }
	}
	return 0;
}
