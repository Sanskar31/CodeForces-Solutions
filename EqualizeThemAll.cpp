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
	int arr[n];
	unordered_map<int, int> mp;
	unordered_map<int, vector<int> > index;
	int maxx = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		index[arr[i]].push_back(i);
		mp[arr[i]]++;
		if (mp[arr[i]] >= mp[maxx])
			maxx = arr[i];
	}
	int last = 0;
	cout << n - mp[maxx] << endl;
	for (auto j : index[maxx])
	{
		for (int i = j - 1; i >= 0; --i)
		{
			if (arr[i] == maxx)
				break;
			if (arr[i] < maxx)
				cout << 1 << " " << i + 1 << " " << i + 2 << endl;
			else
				cout << 2 << " " << i + 1 << " " << i + 2 << endl;
		}
		last = j;
	}
	for (int i = last + 1; i < n; ++i)
	{
		if (arr[i] < maxx)
			cout << 1 << " " << i + 1 << " " << i  << endl;
		else
			cout << 2 << " " << i + 1 << " " << i  << endl;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	int t;
	// cin >> t;
	t = 1;
	test
	return 0;
}