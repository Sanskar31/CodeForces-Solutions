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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int d=b-a;
        if(d==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(d>0)
        {
            if(d%2!=0)
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<2<<endl;
                continue;
            }   
            
        }
        else if(d<0)
        {
            d=abs(d);
            if(d%2==0)
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<2<<endl;
                continue;
            }
        }
    }
    return 0;
}