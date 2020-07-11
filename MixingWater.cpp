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
	double h, c, t;
	cin >> h >> c >> t;
	if (t >= h)
	{
		cout << 1 << endl;
		return;
	}
	double avg = (h + c) / 2;
	if (avg >= t)
	{
		cout << 2 << endl;
		return;
	}
	ll x = (t - c) / (2 * t - h - c);
	ll y = x + 1;

	double t1 = (x * h + (x - 1) * c) / (1.0 * (2 * x - 1));
	double t2 = (y * h + (y - 1) * c) / (1.0 * (2 * y - 1));
	double ab1 = abs(t1 - t);
	double ab2 = abs(t2 - t);

	if (ab1 <= ab2)
		cout << 2 * x - 1 << endl;
	else
		cout << 2 * y - 1 << endl;
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