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

ll smallestPrime(ll n) 
{ 
    for (ll i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
    return n; 
} 

int main()
{
    fast
    ll n;
    cin>>n;
    ll ans;
    if(n%2==0)
    {
        ans=n/2;
    }
    else
    {
        ll t= smallestPrime(n);
        ans= (n-t)/2 + 1;
    }
    cout<<ans<<endl;
    return 0;
}