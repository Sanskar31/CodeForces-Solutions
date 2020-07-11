/**************
* AUTHOR : SHASHANK *
* NICK : lance_lot *
* INSTITUTION : BIT MESRA *
**************/
#include <bits/stdc++.h>
using namespace std;
#define N 100005
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <ll, ll> pll;
const ll M=1e9+7;
ll inf=1e18;

ll power(ll a, ll b, ll mod) { 
    ll c = 1; 
    a = a%mod;
    while(b>0) { 
        if(b%2) c*=a;
        c%=mod; 
        b/=2; 
        a*=a;
        a%=mod; 
    } 
    return c; 
}

int main() {
fast;
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin>>n;
    ll a,b;
    ll x;
    vector<pll> v;
    vector<ll> v1;
    for(ll i = 0;i < n;i++) {
        cin>>a>>b;
        v.pb({a,b});
        v1.pb(a);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    ll dp[n];
    dp[0] = 1;
    for(ll i = 1;i < n;i++) {
        a = v[i].ff,b = v[i].ss;
        x = a-b;
        if(x <= v1[0]) {
            dp[i] = 1;
            continue;
        }
        ll lwr = lower_bound(v1.begin(),v1.end(),x)-v1.begin();
        dp[i] = 1+dp[lwr-1];
    }
    ll minn = inf;
    for(ll i = 0;i < n;i++) {
        minn = min(minn,n-dp[i]);
    }
    cout<<minn;
}