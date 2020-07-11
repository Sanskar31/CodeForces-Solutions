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

int arr[100005];
int dp[100005][3];
int n;

int restDays(int i, int p)
{
    if(i>=n)
        return 0;
    int t= arr[i];
    if(t==0 || t==p)
        return dp[i][p]= 1+restDays(i+1, 0);;
    if(dp[i][p]!=-1)
        return dp[i][p];
    if(t==3)
    {
        if(p==0)
            return dp[i][p]= min(restDays(i+1, 1), restDays(i+1, 2));
        else if(p==1)
            t=2;
        else 
            t=1;
        return dp[i][p]=restDays(i+1, t);
    }
    else
        return dp[i][p]=restDays(i+1, t);
}

int main()
{
    fast
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<3;++j)
        {
            dp[i][j]=-1;
        }
    }
    cout<<restDays(0, 0)<<endl;
    return 0;
}