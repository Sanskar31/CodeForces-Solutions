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
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
        cin>>b[i];
    int v[n];
    for(int i=0;i<n;++i)
        v[i]=-a[i]+b[i];
    ll ans=0;
    sort(v, v+n);
    for(int i=0;i<n;++i)
        ans+= (lower_bound(v+i+1,v+n,-v[i])-v)-(i+1);
    cout<<ans<<endl;
    return 0;
}