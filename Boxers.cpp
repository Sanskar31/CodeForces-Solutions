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
    int arr[n];
    bool taken[150002];
    memset(taken, false, sizeof(taken));
    for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr, arr+n);
    int count=0;
    for(int i=0;i<n;++i)
    {
        //cout<<arr[i]<<": "<<taken[arr[i]-1]<<" "<<taken[arr[i]]<<" "<<taken[arr[i]+1]<<endl;
        if(!taken[arr[i]-1] && arr[i]!=1)
        {
            taken[arr[i]-1]=true;
            count++;
        }
        else if(taken[arr[i]])
        {
            if(!taken[arr[i]+1])
            {
                taken[arr[i]+1]=true;
                count++;
            }
        }
        else
        {
            taken[arr[i]]=true;
            count++;   
        }
    }
    cout<<count<<endl;
    return 0;
}