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
        int n,k;
        cin>>n>>k;
        int temp=k;
        int start=1;
        while(temp>0)
        {
            temp-=start;
            start++;
        }
        int end= temp+start-1;
        start= n-start+1;
        end=n-end+1;
        for(int i=1;i<=n;++i)
        {
            if(i==start || i==end)
                cout<<'b';
            else cout<<'a';
        }
        cout<<endl;
    }


    return 0;
}