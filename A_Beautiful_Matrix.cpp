#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int a,x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a;
            if(a==1)
            {
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(2-x)+abs(2-y)<<"\n";
    return 0;
}