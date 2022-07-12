#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n;
        int s[n];
        map<int,int> m;
        map<int,vector<int>> c;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s[i]=x;
            if(m.find(x)!=m.end())
            {
                m[x]++;
                c[x].push_back(i+1);
            }
            else
            {
                m[x]=1;
                c[x].push_back(i+1);
            }
        }
        x=1;
        for(auto i : m)
        {
            if(i.second==1)
            {
                x=0;
                cout<<-1<<"\n";
                break;
            }
        }
        if(x)
        {
            // for(auto i:c)
            // {
            //     cout<<i.first<<" : ";
            //     for(auto j=0;j<i.second.size();j++)
            //         cout<<i.second[j]<<" ";
            //     cout<<"\n";
            // }
            for(int i=0;i<n;i++)
            {
                x=s[i];
                if(c[x].back()!=i+1)
                {
                    cout<<(c[x].back())<<" ";
                    c[x].pop_back();
                }
                else{
                    int temp=c[x].back();
                    c[x].pop_back();
                    cout<<c[x].back()<<" ";
                    c[x].pop_back();
                    c[x].push_back(temp);
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}