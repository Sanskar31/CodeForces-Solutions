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
	int m[n];
	for (int i = 0; i < n; ++i)
		cin >> m[i];
	sort(m, m + n);
	if (k == 0)
		cout << (m[0] == 1 ? -1 : 1) << endl;
	else if (n == 1)
		cout << m[0] << endl;
	else if (k == n)
		cout << m[n - 1] << endl;
	else
	{
		if (m[k] - m[k - 1] == 0)
			cout << -1 << endl;
		else
			cout << m[k - 1] << endl;
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
	t = 1;
	// cin >> t;
	test;
	return 0;
}