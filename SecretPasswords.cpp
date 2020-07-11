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
#define test while(t--)solve();

bool visited[200005];

void dfs(int i, vector<int> *v)
{
	visited[i] = true;
	for (auto j : v[i])
	{
		if (!visited[j])
			dfs(j, v);
	}
	return;
}

void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		visited[i] = false;
	vector<int> v[(int)2e5 + 100];
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		for (auto c : s)
		{
			v[i].push_back(n + (c - 'a'));
			v[n + (c - 'a')].push_back(i);
		}
	}
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (!visited[i])
		{
			count++;
			dfs(i, v);
		}
	}
	cout << count << endl;
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	//fast
	int t=1;
	test;
	return 0;
}