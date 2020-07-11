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

int ans=0,n, color[100005], par[100005];

void bfs(vector<int> *v)
{
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int p= q.front();
        q.pop();
        if(color[p]!=color[par[p]])
            ans++;
        for(int i=0;i<v[p].size();++i)
        {
            int d= v[p][i];
            if(d==par[p])
                continue;
            q.push(d);
        }
    }
}

int main()
{
    fast
    cin>>n;
    color[0]=0;
    vector<int> v[n+1];
    for(int i=2;i<=n;++i)
    {
        int a;
        cin>>a;
        par[i]=a;
        v[i].push_back(a);
        v[a].push_back(i);
    }
    par[1]=0;
    for(int i=1;i<=n;++i)
        cin>>color[i];
    bfs(v);
    cout<<ans<<endl;
    return 0;
}