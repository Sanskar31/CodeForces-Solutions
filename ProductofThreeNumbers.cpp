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

pair<int,int> returnFactor(int n)
{
    if(n%2==0 && n!=2)
            return {2,n/2};
    for(int i=3;i<sqrt(n);i+=2)
    {
        if(n%i==0)
            return {i, n/i};
    }
    return {-1,-1};
}

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[3];
        bool flag= false;
        for(int i=2;i<sqrt(n);++i)
        {
            if(n%i==0)
            {
                pair<int, int> p= returnFactor(i);
                if(p.first!=-1 && p.first!=n/i && p.second!=n/i && p.first!=p.second)
                {
                    if(p.first==i || p.second==i)
                    arr[0]=p.first;
                    arr[1]=p.second;
                    arr[2]=n/i;
                    flag= true;
                    break;
                }
                else
                {
                    p= returnFactor(n/i);
                    if(p.first!=-1 && p.first!=i && p.second!=i && p.first!=p.second)
                    {
                        arr[0]=p.first;
                        arr[1]=p.second;
                        arr[2]=i;
                        flag= true;
                        break;
                    }
                }
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<3;++i)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}