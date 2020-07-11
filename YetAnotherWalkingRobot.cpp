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

int x=0,y=0;

void move(char c)
{
    if(c=='R')
        x+=1;
    else if(c=='L')
        x-=1;
    else if(c=='U')
        y+=1;
    else
        y-=1;    
}

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<pair<int,int>, int> mp;
        int r=0,l=0,u=0,d=0;
        pair<int, int> p= {0,0}, a;
        mp[p]=0;
        int ans= INT_MAX;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='R')
                p.first++;
            else if(s[i]=='L')
                p.first--;
            else if(s[i]=='D')
                p.second--;
            else 
                p.second++;
            auto itr= mp.find(p);
            if(itr!=mp.end())
            {
                int len= i-(itr->second);
                if(len<ans)
                {
                    ans=len;
                    a={itr->second+1, i+1};
                }
                itr->second= i+1;
            }
            else
            {
                mp[p]=i+1;
            }
        }   
        if(ans==INT_MAX)
            cout<<-1<<endl;
        else 
            cout<<a.first<<" "<<a.second<<endl;
    }
    return 0;
}