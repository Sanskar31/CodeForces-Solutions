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
	int n = s.length();
	int one = -1, two = -1, three = -1;
	int minn = n + 1;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '1')
			one = i;
		else if (s[i] == '2')
			two = i;
		else
			three = i;
		if (one == -1 || two == -1 || three == -1)
			continue;
		int length = max(one, max(two, three)) - min(one, min(two, three)) + 1;
		minn = min(minn, length);
	}
	if (minn == n + 1)
		cout << 0 << endl;
	else
		cout << minn << endl;
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