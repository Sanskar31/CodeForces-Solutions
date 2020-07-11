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
	// string
	int n;
	string s;
	cin >> n >> s;
	map<string, int> mp;
	string maxx = "aa";
	for (int i = 0; i < n; ++i)
	{
		string str = s.substr(i ,  2);
		mp[str]++;
		if (mp[maxx] < mp[str])
			maxx = str;
	}
	cout << maxx << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	//fast
	int t;
	t = 1;
	// cin >> t;
	test;
	return 0;
}