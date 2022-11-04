#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll T;
    string alpha="abcdefghijklmnopqrstuvwxyz";
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=n/k;
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        for(auto i:m){
            cout<<i.first<<" : "<<i.second<<"\n";
        }
        cout<<"\n";
        int ss;
        string req="";
        for(int i=0;i<k;i++){
            ss=0;
            string temp="";
            while(ss<l){
                for(auto j=m.begin();j!=m.end();j++){
                    if(j->second!=0){
                        temp+=(j->first);
                        cout<<"$";
                        ss++;
                        j->second-=1;
                        cout<<"j.second is now"<<j->second<<"<-\n";
                    }
                }
            }
            for(auto i:m){
                cout<<i.first<<" : "<<i.second<<"\n";
            }
            cout<<"\""<<temp<<"\"";
            ss=0;
            int sn=req.size();
            for(int k=0;k<temp.size();k++){
                if(temp[k]!=alpha[k]){
                    req+=alpha[k];
                    cout<<"#";
                    break;
                }
            }
            if(req.size()==sn){
                req+=alpha[req.size()];
                cout<<"@";
            }
        }
        cout<<req<<"\n";
    }
    return 0;
}