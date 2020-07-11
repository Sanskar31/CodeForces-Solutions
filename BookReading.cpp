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
#define INF 1000000009
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second

int main()
{
    fast
    vector<int> v[10];
    v[0]={0};
    v[1]={1,2,3,4,5,6,7,8,9,0};
    v[2]={2,4,6,8,0};
    v[3]={3,6,9,2,5,8,1,4,7,0};
    v[4]={4,8,2,6,0};
    v[5]={5,0};
    v[6]={6,2,8,4,0};
    v[7]={7,4,1,8,5,2,9,6,3,0};
    v[8]={8,6,4,2,0};
    v[9]={9,8,7,6,5,4,3,2,1,0};
    int q;
    cin>>q;
    int arr[10];
    for(int i=0;i<10;++i)
    {
        int sum=0;
        for(int j=0;j<v[i].size();++j)
            sum+=v[i][j];
        arr[i]=sum;
    }
    while(q--)
    {
        ll n,m;
        cin>>n>>m;
        ll a=n/m;
        ll l=m%10;
        int s= v[l].size();
        ll i= a/s;
        ll ans=0;
        ans+=arr[l]*i;
        for(int i=0;i<a%s;++i)
        {
            ans+=v[l][i];
        }
        cout<<ans<<endl;
    }
}