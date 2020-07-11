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
	string s;
	cin >> s;
	int l = 0, r = 0, u = 0, d = 0;
	int n = s.length();
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'D')
			d++;
		else if (s[i] == 'U')
			u++;
		else if (s[i] == 'L')
			l++;
		else
			r++;
	}
	int cut = abs(r - l) + abs(u - d);
	int fin = n - cut;
	if (r > l)
		r -= (r - l);
	else
		l -= (l - r);
	if (u > d)
		u -= (u - d);
	else
		d -= (d - u);
	if (u == 0 && r != 0 && l != 0)
	{
		fin = 2;
		r = 1, l = 1;
	}
	if (r == 0 && u != 0 && d != 0)
	{
		fin = 2;
		u = 1;
		d = 1;
	}
	cout << fin << endl;
	while (r--)
		cout << 'R';
	while (u--)
		cout << 'U';
	while (l--)
		cout << 'L';
	while (d--)
		cout << 'D';
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
	// t = 1;
	cin >> t;
	test;
	return 0;
}