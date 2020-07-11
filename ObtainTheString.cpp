/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
#define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--)
#define INF 100009
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        int l= s.size();
        int n=t.size();
        int count=1;
        map<char, vector<int> > mp;
        queue<char> p;
        int b=0;
        int arr[26]={0};
        for(int i=0;i<l;++i)
        {
            mp[s[i]].push_back(i);
        }
        for(int i=0;i<n;++i)
        {
            p.push(t[i]);
            char temp= t[i];
            if(mp[temp].size()==0)
            {
                cout<<-1<<endl;
                b=1;
                break;
            }
        }
        if(b)
            continue;
        int j =0;

        while(!p.empty())
        {
            char temp= p.front();
            auto itr = lower_bound(mp[temp].begin(), mp[temp].end(), j);
            if(itr==mp[temp].end())
            {
                j=0;
                count++;
            }
            else
            {
                j = *itr+1;
                p.pop();
            }
        }
        cout<<count<<endl;
    }
}