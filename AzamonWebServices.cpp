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
	string s, c;
	cin >> s >> c;
	int n = s.length(), m = c.length();
	unordered_map<char, int> mp;
	for (int i = 0; i < s.length(); ++i)
		mp[s[i]] = i;
	bool flag = false;
	string b = s;
	sort(b.begin(), b.end());
	for (int i = 0; i < n; ++i)
	{
		if (b[i] != s[i])
		{
			int pos = mp[b[i]];
			if (pos > i)
			{
				char t = s[pos];
				s[pos] = s[i];
				s[i] = t;
				break;
			}
		}
	}
	int equal = true;
	for (int i = 0; i < min(m, n); ++i)
	{
		if (c[i] < s[i])
		{
			equal = false;
			break;
		}
		else if (s[i] < c[i])
		{
			equal = false;
			flag = true;
			break;
		}
	}

	if (flag || (equal && n < m))
		cout << s << endl;
	else
		cout << "---" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	int t;
	// t = 1;
	cin >> t;
	test;
	return 0;
}