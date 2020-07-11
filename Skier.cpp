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
	ll time = 0;
	int l = s.length();
	map < pair<int, int>, vector<pair<int, int>>> mp;
	int x = 0, y = 0;
	for (int i = 0; i < l; ++i)
	{
		int x1 = x, y1 = y;
		char c = s[i];
		if (c == 'N')
			y1++;
		else if (c == 'S')
			y1--;
		else if (c == 'E')
			x1++;
		else
			x1--;
		auto itr = find(mp[ {x, y}].begin(), mp[ {x, y}].end(), make_pair(x1, y1));
		if (itr != mp[ {x, y}].end())
			time++;
		else
		{
			time += 5;
			mp[ {x1, y1}].push_back({x, y});
			mp[ {x, y}].push_back({x1, y1});
		}
		x = x1, y = y1;
	}
	cout << time << endl;
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