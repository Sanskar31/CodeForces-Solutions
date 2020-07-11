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

int id[200005];

int root(int a)
{
    if(id[a]==a)
        return a;
    return root(id[a]);
}

void uni(int a, int b, unordered_map<int, int> &mp)
{
    int r1= root(a);
    int r2= root(b);
    if(r1==r2)
        return;
    mp[r1]+=mp[r2];
    id[r2]=r1;
}

int main()
{
    fast
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<=n;++i)
            id[i]=i;
        unordered_map<int, int> mp;
        for(int i=0;i<n;++i)
        {
            int a;
            cin>>a;
            if(mp[a]==0)
                mp[a]=1;
            if(mp[i+1]==0)
                mp[i+1]=1;
            uni(i+1,a,mp);
        }
        for(int i=1;i<=n;++i)
        {
            cout<<mp[root(i)]<<" ";
        }
        cout<<endl;
    }
    return 0;
}