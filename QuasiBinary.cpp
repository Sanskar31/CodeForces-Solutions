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

vector<ll> quasi, dp;

void genQuasi(ll num)
{
    quasi.pb(0);
    quasi.pb(1);
    for(ll i=1;i<=6;++i)
    {
        ll n= pow(10, i);
        if(num<n)
            break;
        quasi.pb(n);
        ll k=1;
        while(quasi[k]<n)
        {
            ll temp= n+quasi[k];
            if(num<temp)
                break;
            quasi.pb(temp);
            k++;
        }
    }
}

void quasiSum(ll n)
{
    ll flag[n+1]={};
    flag[0]=0;
    dp[0]=0;
    dp[1]=1;
    for(ll i=1;i<=n;++i)
    {
        ll k=mod;
        ll j=1;
        ll f;
        while(quasi[j]<=i)
        {

            ll a= 1+dp[i-quasi[j]];
            //k= min(a,k);
            if(a<k){
                f=quasi[j];
                k=a;
            }
            j++;
        }
        dp[i]=k;
        flag[i]=f;
    }
    cout<<dp[n]<<endl;
    /*for(ll i=1;i<=n;i++)
    cout<<flag[i]<<" ";
    cout<<endl;*/
    while(n!=0)
    {
        ll temp= flag[n];
        cout<<temp<<" ";
        n-=temp;
    }
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<=n;++i)dp.pb(mod);
    genQuasi(n);
    quasiSum(n);
    return 0;
}