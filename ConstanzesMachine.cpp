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

int dp[100005], n;
string s;

int countStrings(int index)
{
    if(index>=n-1 && s[n-1]!='m' && s[n-1]!='w')
        return 1;
    if(dp[index]!=-1)
        return dp[index];
    if(s[index]=='m' || s[index]=='w')
        return dp[index]=0;
    if((s[index]=='n' && s[index+1]=='n') || (s[index]=='u' && s[index+1]=='u'))
    {
        return dp[index]= ((countStrings(index+2))%mod+(countStrings(index+1))%mod)%mod;
    }
    return (dp[index]= countStrings(index+1))%mod;
}

int main()
{
    fast
    cin>>s;
    n= s.size();
    for(int i=0;i<n;++i)
        dp[i]=-1;
    cout<<countStrings(0)<<endl;
    return 0;
}