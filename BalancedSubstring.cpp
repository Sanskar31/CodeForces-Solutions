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
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<int, int> mp;
    int bf=0;
    int maxx=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='1')
            bf++;
        else 
            bf--;
        if(bf==0)
            maxx= max(maxx, i+1);
        else if(mp[bf]==0)
            mp[bf]=i+1;
        else
            maxx= max(maxx, i+1-mp[bf]);
    }
    cout<<maxx<<endl;
    return 0;
}