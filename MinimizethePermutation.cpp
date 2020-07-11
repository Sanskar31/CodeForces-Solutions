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

int main() 
{	
    fast
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
    {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; ++j)
        {
			cin >> a[j];
			--a[j];
		}
		int pos = 0;
		while (pos < n) 
        {
			int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
			int el = a[nxt];
			a.erase(a.begin() + nxt);
			a.insert(a.begin() + pos, el);
			if (pos == nxt) pos = nxt + 1;
			else pos = nxt;
		}
		for (auto it : a) 
            cout << it + 1 << " ";
		cout << endl;
	}
	return 0;
}