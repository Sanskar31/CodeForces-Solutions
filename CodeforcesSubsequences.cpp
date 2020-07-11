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
	ll n;
	cin >> n;
	string ans = "codeforces";
	ll val[11];
	for (ll i = 0; i < 10; ++i)
		val[i] = 1;
	ll prod = 1;
	while (prod < n)
	{
		for (ll i = 0; i < 10; ++i)
		{
			prod /= val[i];
			val[i]++;
			prod *= val[i];
			if (prod >= n)
				break;
		}
	}
	for (ll i = 0; i < 10; ++i)
	{
		while (val[i]--)
			cout << ans[i];
	}
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}