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
    string s;
    cin>>s;
    vector<ll> v;
    ll n= s.length();
    ll count=0;
    for(ll i=0;i<n;++i)
    {
        ll num= s[i]-'0';
        if(num%4==0)
        {
            count++;
        }
        if(i==n-1)
            continue;
        ll d= (s[i]-'0')*10+(s[i+1]-'0');
        if(d%4==0)
            v.push_back(i+1);
    }
    vector<ll>::iterator itr;
    for(itr=v.begin();itr!=v.end();++itr)
    {
        count+=*itr;
    }
    cout<<count<<endl;
    return 0;
}