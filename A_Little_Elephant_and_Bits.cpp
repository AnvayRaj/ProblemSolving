#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
void show(stack<char> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.top();
        v.pop();
    }
    cout<<endl;
}
int main(){
    fast
    string n;
    cin>>n;
    int j=n.size()-1,i=0;
    bool flag=true;
    for(int i=0;i<n.size();i++)
    {
        if((i==n.size()-1) && flag)
            break;
        if(n[i]=='0' && flag)
            flag=0;
        else
            cout<<n[i];

    }
}