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
	string ans = s;
	sort(s.begin(), s.end());
	if (n < k)
	{
		cout << ans;
		for (int i = n; i < k; ++i)
			cout << s[0];
		cout << endl;
	}
	else
	{
		char f = ans[k - 1];
		auto itr = upper_bound(s.begin(), s.end(), f);
		if (itr != s.end())
		{
			ans = ans.substr(0, k - 1);
			ans += *itr;
			cout << ans << endl;
		}
		else
		{
			int i = k - 1;
			while (ans[i] == s[n - 1])
				i--;
			f = ans[i];
			auto itr = upper_bound(s.begin(), s.end(), f);
			ans = ans.substr(0, i);
			ans += *itr;
			cout << ans;
			for (int j = i + 1; j < k; ++j)
				cout << s[0];
			cout << endl;
		}
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	int t;
	t = 1;
	// cin >> t;
	test;
	return 0;
}