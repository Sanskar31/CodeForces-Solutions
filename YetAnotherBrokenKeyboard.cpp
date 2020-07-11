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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int present[26];
	memset(present, 0, sizeof(present));
	for (int i = 0; i < k; ++i)
	{
		char t;
		cin >> t;
		present[t - 'a'] = 1;
	}
	ll count = 0;
	for (int i = 0; i < n; ++i)
	{
		ll len = 0;
		while (present[s[i] - 'a'] == 1 && i < n)
		{
			i++;
			len++;
		}
		count += (len * (len + 1)) / 2;
	}
	cout << count << endl;
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