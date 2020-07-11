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

string str;
stack<int>st;

void sum(int n, int m)
{

	int i, j, r;
	i = n;
	j = m;
	r = 0;
	while (i > -1 && j > n)
	{
		r = str[i] - '0' + str[j] - '0' + r;
		st.push(r % 10);
		r /= 10;
		i--;
		j--;
	}
	while (i > -1)
	{
		r += (str[i] - '0');
		st.push(r % 10);
		r /= 10;
		i--;
	}
	while (j > n)
	{
		r += (str[j] - '0');
		st.push(r % 10);
		r /= 10;
		j--;
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << endl;
}

void solve()
{
	int n, i, j, r;
	cin >> n >> str;
	if (n == 2)
	{
		cout << (int)(str[0] - '0' + str[1] - '0') << endl;
		return;
	}
	if (str[n / 2] == '0')
	{
		i = j = n / 2;
		j--;
		while (str[i] == '0' && i < n)i++;
		while (j > -1 && str[j] == '0')j--;
		r = n - i;
		if (j < r)sum(i - 1, n - 1);
		else if (j > r)sum(j - 1, n - 1);
		else
		{
			if (str[0] < str[j])sum(i - 1, n - 1);
			else sum(j - 1, n - 1);
		}
	}
	else
	{
		if (!(n & 1))sum((n / 2) - 1, n - 1);
		else
		{
			r = 0;
			for (i = 0, j = (n / 2) + 1; i < n / 2; i++, j++)
			{
				if (str[i] > str[j])
				{
					r = 2;
					break;
				}
				else if (str[i] < str[j])
				{
					r = 1;
					break;
				}
			}
			if (r == 2)sum((n / 2) - 1, n - 1);
			else sum(n / 2, n - 1);
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}