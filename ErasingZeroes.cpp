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
        string s;
        cin>>s;
        int n=s.length();
        int i=0, j=n-1;
        while(s[i]!='1' && i<n)
            i++;
        while(s[j]!='1' && j>=0)
            j--;
        if(i>n || i==j || j<0)
        {
            cout<<0<<endl;
            continue;
        }
        int count=0;
        for(int k=i+1;k<j;++k)
        {
            if(s[k]=='0')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}