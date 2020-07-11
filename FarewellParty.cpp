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

void solve()
{
	int n;
	cin >> n;
	int a[n];
	unordered_map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{
		if (mp[i] % (n - i) != 0)
		{
			cout << "Impossible" << endl;
			return;
		}
	}
	int id[n], res[n], lft[n];
	memset(id, -1, sizeof(id));
	cout << "Possible" << endl;
	int top = 1;
	for (int i = 0; i < n; ++i)
	{
		if (id[a[i]] == -1)
		{
			id[a[i]] = top++;
			lft[a[i]] = n - a[i];
		}
		res[i] = id[a[i]];
		lft[a[i]]--;
		if (lft[a[i]] == 0)
			id[a[i]] = -1;
	}
	for (auto i : res)
		cout << i << " ";
	cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	int t;
	t = 1;
	// cin >> t;
	test;
	return 0;
}