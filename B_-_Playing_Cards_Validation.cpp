#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,flag=0;
    cin>>n;
    string x;
    set<string> s;
    for(int i=0;i<n;i++){
        cin>>x;
        if(s.find(x)==s.end()){
            s.insert(x);
        }else{
            flag=1;
            // cout<<"*1";
        }
    }
    if(flag){
        cout<<"No\n";
    }else{
        string c1="HDCS";
        string c2="A23456789TJQK";
        int flag1=0,flag2=0;
        for(auto i:s){
            int tempflag1=1;
            for(int j=0;j<4;j++){
                if(i[0]==c1[j]){
                    tempflag1=0;
                }
            }
            if(tempflag1){
                flag1=tempflag1;
                // cout<<"*2";
            }
            int tempflag2=1;
            for(int j=0;j<13;j++){
                if(i[1]==c2[j]){
                    tempflag2=0;
                }
            }
            if(tempflag2){
                flag2=tempflag2;
                // cout<<"*3";
            }
        }
        if(flag1==1 || flag2==1){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }

    return 0;
}