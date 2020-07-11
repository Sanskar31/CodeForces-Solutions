/*
Author: Sanskar Agarwal
Nick: sanskarag
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
	string t;
	cin >> t;
	string s;
	set<char> se;
	for (ll i = 0; i < t.size(); ++i)
	{
		se.insert(t[i]);
	}
	if (se.size() == 1)
	{
		cout << t << endl;
		return;
	}
	ll n = t.size();
	for (ll i = 0; i < n; ++i)
	{
		if (i == n - 1)
		{
			s += t[i];
			break;
		}
		s += t[i];
		if (t[i] == t[i + 1])
		{
			if (t[i] == '0')
				s += '1';
			else
				s += '0';
		}
	}
	cout << s << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	ll t;
	cin >> t;
	// t=1;
	test
	return 0;
}