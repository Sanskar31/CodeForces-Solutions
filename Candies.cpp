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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll j=2;
        ll ans=0;
        ll c= log2(n+1);
        if(pow(2,c)==n+1 && c>=2)
        {
            cout<<1<<endl;
            continue;
        }
        ll d=log2(n);
        for(ll i=3;i<=pow(2,d);)
        {
            if(n%i==0)
            {
                ans=n/i;
                break;
            }
            j++;
            i=pow(2,j)-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}