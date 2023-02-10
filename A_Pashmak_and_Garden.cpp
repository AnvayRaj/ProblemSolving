#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 || y1==y2){
        int d;
        if(x1==x2){
            d=abs(y2-y1);
            cout<<x1+d<<' '<<y1<<' '<<x1+d<<' '<<y2<<'\n';
        }else{
            d=abs(x2-x1);
            cout<<x1<<' '<<y1+d<<' '<<x2<<' '<<y1+d<<'\n';
        }
    }else if(abs(x2-x1)==abs(y2-y1)){
        cout<<x2<<' '<<y1<<' '<<x1<<' '<<y2<<'\n';
    }else{
        cout<<-1<<'\n';
    }
    return 0;
}