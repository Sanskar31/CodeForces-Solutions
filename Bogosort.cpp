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
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;++i)
            cin>>arr[i];
        if(n==1)
        {
            cout<<arr[1]<<endl;
            continue;
        }
        bool done= false;
        int v[n+1];
        for(int i=1;i<=n;++i)
        {
            v[i]= i-arr[i];
        }
        while(!done)
        {
            done= true;
            for(int i=1;i<=n;++i)
            {
                for(int j=i+1;j<=n;++j)
                {
                    if(v[i]==v[j])
                    {
                        int temp= arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        v[i]=i-arr[i];
                        v[j]=j-arr[j];
                        done=false;
                    }
                }
            }
        }
        for(int i=1;i<=n;++i)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}