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

int n,m,k;
bool done[1000];

int main()
{
    fast
    cin>>n>>m>>k;
    pair<int, int> s[k],d[k];
    for(int i=0;i<=k;++i)done[i]=false;
    for(int i=0;i<k;++i)
    {
        int a,b;
        cin>>a>>b;
        s[i].first=a-1, s[i].second=b-1;
    }
    for(int i=0;i<k;++i)
    {
        int a,b;
        cin>>a>>b;
        d[i].first=a-1, d[i].second=b-1;
    }
    int count=n+m+(n*m)-1;
    cout<<count<<endl;
    for(int i=0;i<n;++i)
    {
        cout<<'D';
    }
    for(int i=0;i<m;++i)
    {
        cout<<'L';
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m-1;++j)
        {
            if(i&1)
                cout<<'L';
            else    
                cout<<'R';
        }
        if(i==n-1)
            continue;
        cout<<'U';
    }
    return 0;
}