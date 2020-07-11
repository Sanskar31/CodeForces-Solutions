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

const int N = 200 * 1000 + 11;

int n, m;
int deg[N];
bool used[N];
vector<int> comp;
vector<int> g[N];

void dfs(int v) 
{
	used[v] = true;
	comp.push_back(v);
	
	for (auto to : g[v])
		if (!used[to])
			dfs(to);
}

int main()
{
    fast
	cin>>n>>m;
	for (int i = 0; i < m; ++i) 
    {
		int x, y;
		cin>>x>>y;
		--x, --y;
		g[x].push_back(y);
		g[y].push_back(x);
		++deg[x];
		++deg[y];
	}
	
	int ans = 0;
	for (int i = 0; i < n; ++i) 
    {
		if (!used[i]) 
        {
			comp.clear();
			dfs(i);
			bool ok = true;
			for (auto v : comp) ok &= deg[v] == 2;
			if (ok) ++ans;
		}
	}
	cout<<ans<<endl;
	return 0;
}