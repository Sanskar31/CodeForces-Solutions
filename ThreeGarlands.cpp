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
	int arr[3];
	for (int i = 0; i < 3; ++i)
		cin >> arr[i];
	sort(arr, arr + 3);
	bool check = false;
	if (arr[0] == 3 && arr[2] == 3 && arr[2] == 3)
		check = true;
	else if (arr[0] == 1)
		check = true;
	else if (arr[0] == 2 && arr[1] == 2)
		check = true;
	else if (arr[0] == 2 && arr[1] == 4 && arr[2] == 4)
		check = true;
	if (check)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	int t;
	// cin >> t;
	t = 1;
	test
	return 0;
}