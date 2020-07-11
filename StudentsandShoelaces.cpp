/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];

    for(int i=0;i<m;++i)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int count=0;
    while(1)
    {
        vector<int> v;
        vector<int>::iterator itr;
        for(int i=1;i<=n;++i)
        {
            if(adj[i].size()==1)
            {
                v.push_back(i);
                adj[i].clear();
            }
        }
        if(v.empty())
        {
            break;
        }
        count++;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<v.size();++j)
            {
                itr= find(adj[i].begin(), adj[i].end(), v[j]);
                if(itr!=adj[i].end())
                {
                    adj[i].erase(itr);
                }
            }
        }
    }   
    cout<<count<<endl;
}