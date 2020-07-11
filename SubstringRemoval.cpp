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
#define mod 998244353
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second

int main()
{
    fast
    string s;
    ll n;
    cin>>n;
    cin>>s;
    ll count=1,i,j;
    for(i=0;i<n;++i)
    {
        if(i==0)
        {
            count++;
            continue;
        }
        if(s[i]!=s[i-1])
            break;
        count++;
    }
    for(j=n-1;j>=i;--j)
    {
        if(j==n-1)
        {
            count++;
            continue;
        }
        if(s[j]!=s[j+1])
            break;
        count++;
    }
    if(s[0]==s[n-1] && i<n && j>=0)
    {
        count= (count+(i*(n-j-1)));
    }
    cout<<count%mod<<endl;
    return 0;
}