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
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int j=0;j<n;++j)
            arr[j][0]='B';
        for(int i=0;i<m;++i)
            arr[n-1][i]='B';
        for(int i=0;i<n-1;++i)
        {
            for(int j=1;j<m;++j)
                arr[i][j]='W';
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
                cout<<arr[i][j];
            cout<<endl;
        }
    }
    return 0;
}