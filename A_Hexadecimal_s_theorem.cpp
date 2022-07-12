#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    ll n,a=0,b=0,c=0,fib1=0,fib2=1,t,flag=0;
    cin>>n;
    while(a+b+c<n)
    {
        c=fib1+fib2;
        if(a+b+c==n)
        {
            flag=1;
            break;
        }
        b=fib1+fib2;
        if(a+b+c==n)
        {
            flag=1;
            break;
        }
        a=fib1+fib2;
        if(a+b+c==n)
        {
            flag=1;
            break;
        }
        t=fib1;
        fib1=fib2;
        fib2=fib2+t;
    }
    if(flag || n==0)
        cout<<a<<" "<<b<<" "<<c;
    else
        cout<<"I'm too stupid to solve this problem";

    return 0;
}