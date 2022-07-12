#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int y;
    cin>>y;
    for(int i=y+1;i<=9999;i++)
    {
        int a=i/1000;
        int b=(i%1000)/100;
        int c=((i%1000)%100)/10;
        int d=i%10;
        if(a!=b && a!=c && a!=d)
        {
            if(b!=c && b!=d)
            {
                if(c!=d)
                {
                    cout<<a<<b<<c<<d;
                    break;
                }
            }
        }
    }
    return 0;
}