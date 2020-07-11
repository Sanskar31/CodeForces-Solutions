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

string s;
void swap(ll j, ll i)
{
    char t=s[j];
    s[j]=s[i];
    s[i]=t;
}

int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cin>>s;
        ll j=-1;
        for(ll i=j+1;i<n;++i)
        {
            while(s[i]!='0' && i<n)
                i++;
            if(i==n)
                break;
            ll mov= i-j-1;
            if(mov>k)
            {
                swap(i-k, i);
                break;
            }
            else
            {
                swap(j+1,i);
                j++;
                k-=mov;
                if(k==0)
                    break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}