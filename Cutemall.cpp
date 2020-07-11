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

vector<int> v[100005];
ll visited[100005], parent[100005];
ll even=0, n;

void reset()
{
    for(ll i=0;i<=n;++i)
    {
        visited[i]=0;
        parent[i]=-1;
    }
}

ll dfs(ll start)
{
    visited[start]=1;
    ll count=1;
    for(ll i=0;i<v[start].size();++i)
    {
        ll temp= v[start][i];
        if(temp==parent[start])
            continue;
        if(!visited[temp])
        {
            parent[temp]= start;
            count+=dfs(temp);
        }
    }
    if(!(count&1))
        even++;
    return count;
}

int main()
{
    fast
    cin>>n;
    for(ll i=0;i<n-1;++i)
    {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    if(n&1)
    {
        cout<<-1<<endl;
        return 0;
    }
    reset();
    for(ll i=1;i<=n;++i)
    {
        if(!visited[i])
            ll temp= dfs(i);
    }
    cout<<even-1<<endl;
    return 0;
}