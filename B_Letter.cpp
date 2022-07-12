#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fast
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,int> m;
    int flag=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=' ')
        {
            if(m.find(s1[i])!=m.end())
            {
                m[s1[i]]++;
            }
            else
                m[s1[i]]=1;
        }
        else
            continue;

    }
    // for(auto i=m.begin();i!=m.end();i++)
    //     cout<<i->first<<" "<<i->second<<endl;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]!=' ')
        {
            if(m.find(s2[i])!=m.end())
            {
                if(m[s2[i]]>0)
                {
                    m[s2[i]]--;
                }
                else
                {
                    // cout<<s2[i];
                    flag=1;
                    break;
                }
            }
            else
            {
                // cout<<s2[i]<<" "<<i;
                flag=1;
                break;
            }
        }
    }
    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";

    return 0;
}