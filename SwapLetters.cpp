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
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	int count = 0;
	vector<pair<int, int> > steps;
	unordered_map<char, vector<int> > mp;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == t[i])
			continue;
		if (s[i] == 'a' && t[i] == 'b')
			mp['b'].push_back(i);
		else
			mp['a'].push_back(i);
	}
	int n1 = mp['a'].size(), n2 = mp['b'].size() ;
	if (n1 % 2 != n2 % 2)
	{
		cout << -1 << endl;
		return;
	}
	count = n1 / 2 + n2 / 2 + 2 * (n1 % 2);
	cout << count << endl;
	int i = 1;
	while (i < n2)
	{
		int i1 = mp['b'][i], i2 = mp['b'][i - 1];
		cout << i2 + 1 << " " << i1 + 1 << endl;
		i += 2;
	}
	i = 1;
	while (i  < n1)
	{
		int i1 = mp['a'][i], i2 = mp['a'][i - 1];
		cout << i2 + 1 << " " << i1 + 1 << endl;
		i += 2;
	}
	if (n1 & 1)
	{
		int i1 = n1 - 1, i2 = n2 - 1;
		i = mp['a'][i1];
		int j = mp['b'][i2];
		cout << i + 1 << " " << i + 1 << endl;
		cout << i + 1 << " " << j + 1 << endl;
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}