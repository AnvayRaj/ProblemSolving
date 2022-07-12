#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    if(T%2!=0)
        cout<<-1;
    else
    {
        for(int i=0;i<T;i+=2)
        {
            cout<<i+2<<" "<<i+1<<" ";
        }
    }
    return 0;
}