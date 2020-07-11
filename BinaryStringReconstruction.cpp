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
	int n0, n1, n2; cin >> n0 >> n1 >> n2;

	if (n2 && !n1 && !n0)
	{
		for (int i = 0; i < n2 + 1; ++i)
			cout << '1';
		cout << '\n';
		return;
	}

	for (int i = 0; i < n0 + 1; ++i)
		cout << '0';

	if (!n1)
	{
		cout << '\n';
		return;
	}

	for (int i = 0; i < n2 + 1; ++i)
		cout << '1';

	n1--;

	char cur = '0';

	while (n1--)
	{
		cout << cur;

		cur = '0' + '1' - cur;
	}
	cout << '\n';
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}