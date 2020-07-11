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

int n, m, k, total = 0, s = 0;
string maze[501];
bool visited[501][501];

bool isSafe(int x, int y)
{
	if (x < 0 || y < 0 || x >= n || y >= m)
		return false;
	return true;
}

void dfs(int x, int y)
{
	if (visited[x][y])
		return;
	visited[x][y] = true;
	total++;
	if (total > s - k)
		maze[x][y] = 'X';

	if (isSafe(x + 1, y) && maze[x + 1][y] == '.')
		dfs(x + 1, y);
	if (isSafe(x - 1, y) && maze[x - 1][y] == '.')
		dfs(x - 1, y);
	if (isSafe(x, y + 1) && maze[x][y + 1] == '.')
		dfs(x, y + 1);
	if (isSafe(x, y - 1) && maze[x][y - 1] == '.')
		dfs(x, y - 1);
}

void solve()
{
	cin >> n >> m >> k;
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < n; ++i)
		cin >> maze[i];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			if (maze[i][j] == '.')
				s++;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (maze[i][j] == '.')
			{
				dfs(i, j);
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cout << maze[i][j];
		cout << endl;
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