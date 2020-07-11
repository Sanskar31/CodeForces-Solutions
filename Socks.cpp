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

int n, m, k, ans, c[200001];
bool mark[200001];
vector<int> g[200001];
map<int,int> mp;
 
void dfs(int u) 
{
	mark[u] = true;
	mp[c[u]]++;
	for(int v: g[u]) if(!mark[v]) dfs(v);
}
 
int main() 
{
    fast
	cin>>n>>m>>k;
	for(int i = 1; i <= n; i++) cin>>c[i];
	for(int i = 0,u,v; i < m; i++)
    {
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i = 1; i <= n; i++) if(!mark[i]) 
    {
		dfs(i);
		int sum = 0, mx = 0;
		for(auto p: mp) 
        {
			mx = max(p.second, mx);
			sum += p.second;
		}
		ans += sum-mx;
		mp.clear();
	}
	cout<<ans<<endl;
}