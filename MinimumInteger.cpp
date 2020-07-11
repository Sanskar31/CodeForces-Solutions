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
    ll q;
    cin>>q;
    while(q--)
    {
        ll r,l,d;
        cin>>r>>l>>d;
        float t= (float)(r/d);
        int ans;
        if(t>1 || r>d)
            ans=d;
        else
        {
            ans=(1+(l/d))*d;
        }
        cout<<ans<<endl;
    }
    return 0;
}