/*
Author: Sanskar Agarwal
Nick: sanskarag
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int mn=m,mx=m, t0=0;
        bool flag= true;
        for(int i=0;i<n;++i)
        {
            int t,l,r;
            cin>>t>>l>>r;
            int time= t-t0;
            t0=t;
            mn= mn-time, mx=mx+time;
            if(mn<=r && mx>=l)
            {
                mn=max(l,mn);
                mx=min(r,mx);
            }
            else
            {
                flag=false;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}