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
		ll n;
		cin >> n;
		vector<int> vals;
		int pos2 = -1;
		while (n > 0) 
        {
			vals.push_back(n % 3);
			if (vals.back() == 2) pos2 = int(vals.size()) - 1;
			n /= 3;
	    }
		vals.push_back(0);
        cout<<endl;
		if (pos2 != -1)
        {
			int pos0 = find(vals.begin() + pos2, vals.end(), 0) - vals.begin();
			vals[pos0] = 1;
			for (int i = pos0 - 1; i >= 0; --i) 
				vals[i] = 0;
		}
		ll ans = 0;
		ll pw = 1;
		for (int i = 0; i < int(vals.size()); ++i) 
        {
			ans += pw * vals[i];
			pw *= 3;
		}
		if (vals.back() == 1) 
        {
            ans = pw / 3;
        }
		cout << ans << endl;
	}
	return 0;
}