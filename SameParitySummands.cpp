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
	if (n & 1 && k & 1 ^ 1)
	{
		cout << "NO" << endl;
		return;
	}
	if (n & 1 ^ 1 && k & 1)
	{
		if (n < 2 * k)
		{
			cout << "NO" << endl;
			return;
		}
		cout << "YES" << endl;
		for (int i = 1; i < k; ++i)
			cout << "2 ";
		cout << n - 2 * (k - 1) << endl;
	}
	else
	{
		if (n < k)
		{
			cout << "NO\n";
			return;
		}
		cout << "YES" << endl;
		for (int i = 1; i < k; ++i)
			cout << "1 ";
		cout << n - (k - 1) << endl;
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
	// t = 1;
	cin >> t;
	test;
	return 0;
}