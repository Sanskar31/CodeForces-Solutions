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
	ll a, b;
	cin >> a >> b;
	vector<int>ans;
	int i = 1;
	while (a - i >= 0)
	{
		ans.pb(i);
		a -= i;
		i++;
	}
	ll x = i - a;
	int count = ans.size();
	if (x > 0 && x < i)
	{
		ans.pb(i++);
	}
	cout << count << endl;
	for (int t : ans)
	{
		if (t == x)
			continue;
		cout << t << ' ';
	}
	cout << endl;
	ans.clear();
	if (x > 0 && x < i && b - x >= 0)
		ans.pb(x), b -= x;
	while (b - i >= 0)
	{
		ans.pb(i);
		b -= i;
		i++;
	}
	cout << ans.size() << endl;
	for (int t : ans)
		cout << t << ' ';
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	ll t;
	t = 1;
	// cin >> t;
	test;
	return 0;
}